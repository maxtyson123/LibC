/**
 * @file wait.h
 * @brief Defines fundamental functions that arent related to I/O, strings or maths.
 *
 * @see https://pubs.opengroup.org/onlinepubs/9699919799/basedefs/sys_wait.h.html
 *
 * @date 16 December 2025
 * @author Max Tyson
 *
 * @todo status layout is linux specific, fix
 */

#include <libc_common.h>
#include <sys/types.h>
#include <signal.h>

#ifndef LIBC_WAIT_H
#define LIBC_WAIT_H

CPP_START

// waitpid() flags
#define WCONTINUED		(1 << 0)	///< Report continued children
#define WNOHANG			(1 << 1)	///< If no child has changed state, return immediately
#define WUNTRACED		(1 << 2)	///< Report stopped children (that arent being traced)

// waittid() flags
#define WEXITED			(1 << 0)	///< Report children that exited normally
#define WNOWAIT			(1 << 1)	///< Peek the child status
#define WSTOPPED		(1 << 2)	///< Report children that were stopped

// Internal: status layout (signal | core | exit code)
#define __WSTATUS_SIGNAL_BITS		7												///< How many bits allocated for the sumbol
#define __WSTATUS_SIGNAL_MASK		((1u << __WSTATUS_SIGNAL_BITS) - 1)				///< Masks the low bites to get the signal
#define __WSTATUS_COREDUMP_BIT		__WSTATUS_SIGNAL_BITS							///< Bit index for the core dump
#define __WSTATUS_LOW_MASK			((1u << 8) - 1)									///< Masks the whole low bite
#define __WSTATUS_HIGH_SHIFT		(__WSTATUS_SIGNAL_BITS + 1)						///< Bit shift to get the high byte
#define __WSTATUS_HIGH_MASK			0xFF											///< Masks the high bite (exit code)
#define __WSTATUS_STOP_MASK			(__WSTATUS_LOW_MASK & ~__WSTATUS_SIGNAL_MASK)	///< Stopped is all low bits except core

// Checkers
#define WIFEXITED(status)		(((status) & __WSTATUS_SIGNAL_MASK) == 0)							///< Process exited normally (can use WEXITSTATUS)
#define WIFSIGNALED(status)		(((status) & __WSTATUS_SIGNAL_MASK) != 0 && !WIFSTOPPED(status))	///< Terminated by a signal (can use)
#define WIFSTOPPED(status)		(((status) & __WSTATUS_LOW_MASK) == __WSTATUS_STOP_MASK)			///< Process didnt handle a stop signal
#define WIFCONTINUE(status)		(((status) & __WSTATUS_LOW_MASK) == __WSTATUS_LOW_MASK && \
								 ((status) >> __WSTATUS_HIGH_SHIFT) == __WSTATUS_HIGH_MASK)			///< Process was stopped but now continued
// Extracters
#define WEXITSTATUS		(((status) >> __WSTATUS_HIGH_SHIFT) & __WSTATUS_HIGH_MASK)	///< Get the status bits from the returned status
#define WTERMSIG		((status) & __WSTATUS_SIGNAL_BITS)							///< Get the signal that terminated the process
#define WSTOPSIG		(((status) & __WSTATUS_LOW_MASK) == __WSTATUS_STOP_MASK)	///< Get the signal that stopped the process

/**
 * @enum _IDType
 * @brief Internal representation of how an ID should be interpreted for an waitid() call
 *
 * @typedef idtype_t
 * @brief Public alais of _IDType
 */
typedef enum _IDType
{
	P_ALL,
	P_PGID,
	P_PID
} idtype_t;

pid_t	wait(int *);
int		waitid(idtype_t, id_t, siginfo_t *, int);
pid_t	waitpid(pid_t, int *, int);

CPP_END

#endif //LIBC_WAIT_H