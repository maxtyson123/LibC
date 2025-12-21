/**
 * @file signal.h
 * @brief Defines functions to handle async events in a proc
 *
 * @see https://pubs.opengroup.org/onlinepubs/9699919799/basedefs/signal.h.html
 *
 * @date 16 December 2025
 * @author Max Tyson
*/
 

#include <libc_common.h>
#include <platform.h>
#include <sys/types.h>

#ifndef LIBC_SIGNAL_H
#define LIBC_SIGNAL_H

CPP_START

#define SIG_DFL 1	///< Request default signal handling
#define SIG_ERR 2	///< Call to signal() resulted in an error
#define SIG_IGN 3	///< Ignore the signal

typedef __SIG_ATOMIC_TYPE__ sig_atomic_t;
typedef unsigned long sigset_t;

// Forward defs
struct timespec;

// Function typdefs
typedef void (*sigev_notify_function_t)(union sigval);
typedef void (*sighandler_t)(int);
typedef void (*sigaction_handler_t)(int, siginfo_t*, void *);

/**
 * @struct sigevent
 * @brief Define how to notify the process when an event is fired
 */
struct sigevent
{
	int						sigev_notify;				///< How to notify upon signaling
	int						sigev_signo;				///< The signal this event is linked to
	union sigval			sigev_value;				///< The signal payload
	sigev_notify_function_t sigev_notify_function;		///< Function to handle the signal
	pthread_attr_t*			sigev_notify_attributes;	///< Defines the thread to be created to handle the signal
};

// Used in sigevent::sigev_notify
#define SIGEV_NONE		///< Dont notify the process
#define SIGEV_SIGNAL	///< Queue a signal with a value
#define SIGEV_THREAD	///< Spin up a thread and call a function

/**
 * @union sigval
 * @brief A payload to pass along with a signal
 */
union  sigval
{
	int		sival_int;
	void*	sival_ptr;
};

#define _NSIG		64			///< How many signals this LibC supports
#define SIGRTMIN	32			///< Lowest possible signal value (0-31 are reserved)
#define SIGRTMAX	(_NSIG - 1)	///< Highest possible signal value
#define SIG2STR_MAX 32			///< The size of the buffer required to hold a string returned by sig2str()

#define SIGHUP		1   ///< Hangup 
#define SIGINT      2   ///< Terminal interrupt 
#define SIGQUIT     3   ///< Terminal quit 
#define SIGILL      4   ///< Illegal instruction 
#define SIGTRAP     5   ///< Trace/breakpoint trap 
#define SIGABRT     6   ///< Abort 
#define SIGBUS      7   ///< Bus error 
#define SIGFPE      8   ///< Erroneous arithmetic operation
#define SIGKILL     9   ///< Kill (cannot be caught or ignored) 
#define SIGUSR1     10  ///< User-defined signal 1 
#define SIGSEGV     11  ///< Invalid memory reference 
#define SIGUSR2     12  ///< User-defined signal 2 
#define SIGPIPE     13  ///< Write on pipe with no reader 
#define SIGALRM     14  ///< Alarm clock 
#define SIGTERM     15  ///< Termination signal 

#define SIGCHLD     17  ///< Child stopped or terminated 
#define SIGCONT     18  ///< Continue if stopped 
#define SIGSTOP     19  ///< Stop executing (cannot be caught or ignored) 
#define SIGTSTP     20  ///< Terminal stop 
#define SIGTTIN     21  ///< Background read from terminal 
#define SIGTTOU     22  ///< Background write to terminal 

#define SIGURG      23  ///< Urgent condition on socket 
#define SIGXCPU     24  ///< CPU time limit exceeded 
#define SIGXFSZ     25  ///< File size limit exceeded 
#define SIGVTALRM   26  ///< Virtual timer expired 
#define SIGPROF     27  ///< Profiling timer expired 
#define SIGWINCH    28  ///< Window size change 
#define SIGSYS      31  ///< Bad system call

/**
 * @struct sigaction
 * @brief Define what happens when receiving a specific signal
 *
 * @warning Use either sa_handler or sa_sigaction NOT both
 */
struct sigaction
{
	sighandler_t		sa_handler;		///< Pointer to a signal-catching function or one of the SIG_IGN or SIG_DFL
	sigset_t			sa_mask;		///< Set of signals to be blocked during execution of the signal handling function
	int					sa_flags;		///< Special flags.
	sigaction_handler_t sa_sigaction;	///< Pointer to a signal-catching function. (legacy/fast)

};

// Used by sigprocmask()/pthread_sigmask() to set sigaction::sa_mask
#define SIG_BLOCK	1	///< Add the signals to the block mask
#define SIG_UNBLOCK	2	///< Remove the signals from the block mask
#define SIG_SETMASK	3	///< Replace the entire mask

#define SA_NOCLDSTOP	(1 << 0)	///< Do not generate SIGCHLD when children stop/continue
#define SA_ONSTACK		(1 << 1)	///< Causes signal delivery to occur on an alternate stack.
#define SA_RESETHAND	(1 << 2)	///< Resets the signal’s handling behavior to the default action before the signal handler begins execution.
#define SA_RESTART		(1 << 3)	///< Automatically restart interrupted system calls
#define SA_SIGINFO		(1 << 4)	///< Deliver extended signal information to the handler
#define SA_NOCLDWAIT	(1 << 5)	///< Prevent creation of child processes that have exited but are still waiting for their exit code to be read
#define SA_NODEFER		(1 << 6)	///< Do not block the signal while its handler runs

#define SS_ONSTACK		(1 << 0)	///< Handler is executing on the alternate signal stack
#define SS_DISABLE		(1 << 1)	///< Disable the alternate signal stack

#define MINSIGSTKSZ		2048		///< Minimum required size for a signal handler stack
#define SIGSTKSZ		8192		///< Default size for the alternate signal stack

/// Platform specific representation of the CPU context state (registers)
typedef struct _platform_mcontext mcontext_t;

/**
 * @struct _stack
 * @brief Provides information about a stack
 *
 * @typedef stack_t
 * @brief Public alais of _stack
 */
typedef struct _stack
{
	void*		ss_sp;      ///< Stack base or pointer
	size_t		ss_size;    ///< Stack size in bytes
	int			ss_flags;	///< Flags

} stack_t;

/**
 * @struct _ucontext
 * @brief Defines the information needed to resume to a userspace context
 *
 * @typedef ucontext_t
 * @brief Public alais of _ucontext
 */
typedef struct _ucontext
{
	struct _ucontext*	uc_link;		///< Pointer to the context that is resumed when this context returns.
	sigset_t			uc_sigmask;		///< The set of signals that are blocked when this context is active.
	stack_t				uc_stack;		///< The stack used by this context.
	mcontext_t			uc_mcontext;	///<  A machine-specific representation of the saved context.
} ucontext_t;

/**
 * @struct _siginfo
 * @brief Defines the cause and origin of a signal
 *
 * @typedef ucontext_t
 * @brief Public alais of _siginfo
 */
typedef struct _siginfo
{
	int				si_signo;	///< Signal number
	int				si_code;	///< Signal code.
	int				si_errno;	///< If non-zero, an errno value associated with  this signal, as described in <errno.h>.
	pid_t			si_pid;		///< Sending process ID.
	uid_t			si_uid;		///< User ID of sending process.
	void*			si_addr;	///< Address that caused fault.
	int				si_status;	///< Exit value or signal.
	union sigval	si_value;	///< Signal value.
} siginfo_t;

// SIGILL
#define ILL_ILLOPC		1	///< Illegal opcode
#define ILL_ILLOPN		2   ///< Illegal operand
#define ILL_ILLADR		3   ///< Illegal addressing mode
#define ILL_ILLTRP		4   ///< Illegal trap
#define ILL_PRVOPC		5   ///< Privileged opcode
#define ILL_PRVREG		6   ///< Privileged register
#define ILL_COPROC		7   ///< Coprocessor error
#define ILL_BADSTK		8   ///< Internal stack error

// SIGFPE
#define FPE_INTDIV		1   ///< Integer div by zero
#define FPE_INTOVF		2   ///< Integer overflow
#define FPE_FLTDIV		3   ///< Float div by zero
#define FPE_FLTOVF		4   ///< Float overflow
#define FPE_FLTUND		5   ///< Float underflow
#define FPE_FLTRES		6   ///< Float inexact result
#define FPE_FLTINV		7   ///< Invalid float operation
#define FPE_FLTSUB		8   ///< Subscript out of range

// SIGSEGV
#define SEGV_MAPERR		1   ///< Address not mapped
#define SEGV_ACCERR		2   ///< Invalid access permissions

// SIGBUS
#define BUS_ADRALN		1   ///< Invalid address alignment
#define BUS_ADRERR		2   ///< Nonexistent physical address
#define BUS_OBJERR		3   ///< Object-specific hardware error

// SIGTRAP
#define TRAP_BRKPT		1   ///< Process breakpoint
#define TRAP_TRACE		2   ///< Process trace trap

// SIGCHLD
#define CLD_EXITED		1   ///< Child exited normally
#define CLD_KILLED		2   ///< Child killed
#define CLD_DUMPED		3   ///< Child terminated and dumped core
#define CLD_TRAPPED		4   ///< Traced child trapped
#define CLD_STOPPED		5   ///< Child stopped
#define CLD_CONTINUED	6   ///< Stopped child continued

// ANY
#define SI_USER			1   ///< Sent by kill()
#define SI_QUEUE		2   ///< Sent by sigqueue()
#define SI_TIMER		3   ///< Timer expiration
#define SI_ASYNCIO		4   ///< Async I/O completion
#define SI_MESGQ		5   ///< Message queue arrival

int    			kill(pid_t, int);
int    			killpg(pid_t, int);
int    			pthread_kill(pthread_t, int);
int    			raise(int);
int    			sigqueue(pid_t, int, union sigval);

sighandler_t	signal(int signum, sighandler_t handler);
int    			sigaction(int, const struct sigaction *restrict, struct sigaction *restrict);

int    			sigprocmask(int, const sigset_t *restrict, sigset_t *restrict);
int    			pthread_sigmask(int, const sigset_t *restrict, sigset_t *restrict);

int    			sigemptyset(sigset_t *);
int    			sigfillset(sigset_t *);
int    			sigaddset(sigset_t *, int);
int    			sigdelset(sigset_t *, int);
int    			sigismember(const sigset_t *, int);

int    			sigpending(sigset_t *);
int    			sigsuspend(const sigset_t *);
int    			sigwait(const sigset_t *restrict, int *restrict);
int    			sigwaitinfo(const sigset_t *restrict, siginfo_t *restrict);
int    			sigtimedwait(const sigset_t *restrict, siginfo_t *restrict, const struct timespec *restrict);

int    			sigaltstack(const stack_t *restrict, stack_t *restrict);

void   			psignal(int, const char *);
void   			psiginfo(const siginfo_t *, const char *);

int    			sig2str(int, char *);
int    			str2sig(const char *restrict, int *restrict);

CPP_END

#endif //LIBC_SIGNAL_H