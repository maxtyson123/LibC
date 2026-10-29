/**
 * @file uinstd.h
 * @brief Defines tests to check POSIX compliance with optional features
 *
 * @see https://pubs.opengroup.org/onlinepubs/9799919799/basedefs/unistd.h.html
 *
 * @date 28 December 2025
 * @author Max Tyson
 */

#include <libc_common.h>
#include <stdint.h>
#include <stddef.h>
#include <sys/types.h>
#include <fcntl.h>
#include <stdio.h>

#ifndef LIBC_UINSTD_H
#define LIBC_UINSTD_H

CPP_START

#define _POSIX_VERSION	202405L	///< The version that this libc implementation complies with
#define _POSIX2_VERSION	-1		///< The version that this platform's shell and utilities complies with (@todo platform specidic)
#define _XOPEN_VERSION	800		///< The version of X/Open Portability Guide this libc implementation complies with

// Optional features / groups
#define _NOT_IMPLEMENTED	-1		///< Optional feature not implemented in this environment
#define _ABI_PRESENT		0		///< The ABI linkage exists but may not at runtime
#define _PLATFORM_SUPPORTED	1		///< Supported as defined by platform (@todo abstract for platforms)
#define _SPEC_SUPPORTED		202405L	///< Supported as defined by POSIX spec

#define _POSIX_ADVISORY_INFO				_SPEC_SUPPORTED		///< Whether the advisory functions are implemented
#define _POSIX_ASYNCHRONOUS_IO				_SPEC_SUPPORTED		///< Whether the header <aio.h> is implemented
#define _POSIX_BARRIERS						_SPEC_SUPPORTED		///< Whether the threading barrier functions are implemented
#define _POSIX_CHOWN_RESTRICTED				_PLATFORM_SUPPORTED	///< Whether only root can change ownership and user can change group
#define _POSIX_CLOCK_SELECTION				_SPEC_SUPPORTED		///< Whether applications can select which clock is used for timers/timeouts
#define _POSIX_CPUTIME						_PLATFORM_SUPPORTED	///< Whether CPU time is tracked for threads and processes
#define _POSIX_DEVICE_CONTROL				_PLATFORM_SUPPORTED	///< Whether device I/O through can be done through posix_devctl()
#define _POSIX_FSYNC						_PLATFORM_SUPPORTED	///< Whether files can be force flushed to disk via fsync()
#define _POSIX_IPV6							_PLATFORM_SUPPORTED	///< Whether the system supports IPv6
#define _POSIX_JOB_CONTROL					_SPEC_SUPPORTED		///< Whether the background/foreground job control functions are implemented
#define _POSIX_MAPPED_FILES					_SPEC_SUPPORTED		///< Whether files can be mapped into a processes' memory
#define _POSIX_MEMLOCK						_PLATFORM_SUPPORTED	///< Whether process can force their pages to stay in RAM
#define _POSIX_MEMLOCK_RANGE				_PLATFORM_SUPPORTED	///< Whether process can force a range of memory to stay in RAM
#define _POSIX_MEMORY_PROTECTION			_SPEC_SUPPORTED		///< Whether the function mprotect() is implemented
#define _POSIX_MESSAGE_PASSING				_PLATFORM_SUPPORTED	///< Whether the header <mqueue.h> is implemented
#define _POSIX_MONOTONIC_CLOCK				_SPEC_SUPPORTED		///< Whether an immutable clock is implemented
#define _POSIX_NO_TRUNC						_PLATFORM_SUPPORTED	///< Whether paths longer than NAME_MAX will error rather than being truncated
#define _POSIX_PRIORITIZED_IO				_PLATFORM_SUPPORTED	///< Whether aio read/write operations can be scheduler prioritized
#define _POSIX_PRIORITY_SCHEDULING			_PLATFORM_SUPPORTED ///< Whether the header <sched.h> is implemented
#define _POSIX_RAW_SOCKETS					_PLATFORM_SUPPORTED	///< Whether sockets at the IP layer or lower are allowed to be created
#define _POSIX_READER_WRITER_LOCKS			_SPEC_SUPPORTED		///< Whether the reader-writer lock functions are implemented
#define _POSIX_REALTIME_SIGNALS				_SPEC_SUPPORTED		///< Whether the realtime signal extensions (queued signals, sigqueue()) are implemented
#define _POSIX_REGEXP						_PLATFORM_SUPPORTED	///< Whether the header <regex.h> is implemented
#define _POSIX_SAVED_IDS					_PLATFORM_SUPPORTED	///< Whether processes have a saved set-user-ID and set-group-ID
#define _POSIX_SEMAPHORES					_SPEC_SUPPORTED		///< Whether the header <semaphore.h> is implemented
#define _POSIX_SHARED_MEMORY_OBJECTS		_PLATFORM_SUPPORTED	///< Whether shm_open() and shm_unlink() are implemented
#define _POSIX_SHELL						_PLATFORM_SUPPORTED	///< Whether a POSIX shell is available for system() and popen()
#define _POSIX_SPAWN						_PLATFORM_SUPPORTED	///< Whether the header <spawn.h> is implemented
#define _POSIX_SPIN_LOCKS					_SPEC_SUPPORTED		///< Whether the spin lock functions are implemented
#define _POSIX_SPORADIC_SERVER				_PLATFORM_SUPPORTED	///< Whether the sporadic server scheduling policy is implemented for processes
#define _POSIX_SYNCHRONIZED_IO				_PLATFORM_SUPPORTED	///< Whether synchronized I/O (O_SYNC, O_DSYNC, fdatasync()) is implemented
#define _POSIX_THREAD_ATTR_STACKADDR		_PLATFORM_SUPPORTED	///< Whether a thread's stack address can be set through its attributes
#define _POSIX_THREAD_ATTR_STACKSIZE		_PLATFORM_SUPPORTED	///< Whether a thread's stack size can be set through its attributes
#define _POSIX_THREAD_CPUTIME				_PLATFORM_SUPPORTED	///< Whether CPU time is tracked per thread
#define _POSIX_THREAD_PRIO_INHERIT			_PLATFORM_SUPPORTED	///< Whether mutexes can use the priority inheritance protocol
#define _POSIX_THREAD_PRIO_PROTECT			_PLATFORM_SUPPORTED	///< Whether mutexes can use the priority ceiling protocol
#define _POSIX_THREAD_PRIORITY_SCHEDULING	_PLATFORM_SUPPORTED	///< Whether threads can set their own scheduling policy and priority
#define _POSIX_THREAD_PROCESS_SHARED		_PLATFORM_SUPPORTED	///< Whether mutexes and condition variables can be shared between processes
#define _POSIX_THREAD_ROBUST_PRIO_INHERIT	_PLATFORM_SUPPORTED	///< Whether robust mutexes can use the priority inheritance protocol
#define _POSIX_THREAD_ROBUST_PRIO_PROTECT	_PLATFORM_SUPPORTED	///< Whether robust mutexes can use the priority ceiling protocol
#define _POSIX_THREAD_SAFE_FUNCTIONS		_SPEC_SUPPORTED		///< Whether the thread safe (_r) function variants are implemented
#define _POSIX_THREAD_SPORADIC_SERVER		_PLATFORM_SUPPORTED	///< Whether the sporadic server scheduling policy is implemented for threads
#define _POSIX_THREADS						_SPEC_SUPPORTED		///< Whether the header <pthread.h> is implemented
#define _POSIX_TIMEOUTS						_SPEC_SUPPORTED		///< Whether the timed variants of blocking functions are implemented
#define _POSIX_TIMERS						_SPEC_SUPPORTED		///< Whether the per-process timer functions are implemented
#define _POSIX_TYPED_MEMORY_OBJECTS			_PLATFORM_SUPPORTED	///< Whether typed memory objects are implemented
#define _POSIX2_C_BIND						_SPEC_SUPPORTED		///< Whether the C language binding of the shell and utilities is supported
#define _POSIX2_C_DEV						_PLATFORM_SUPPORTED	///< Whether the C language development utilities (c17, make, lex, yacc) are provided
#define _POSIX2_CHAR_TERM					_PLATFORM_SUPPORTED	///< Whether at least one terminal type is supported by the utilities
#define _POSIX2_FORT_RUN					_PLATFORM_SUPPORTED	///< Whether the FORTRAN runtime utilities are provided
#define _POSIX2_LOCALEDEF					_PLATFORM_SUPPORTED	///< Whether locales can be created with localedef
#define _POSIX2_SW_DEV						_PLATFORM_SUPPORTED	///< Whether the software development utilities (ar, make, strip) are provided
#define _POSIX2_UPE							_PLATFORM_SUPPORTED	///< Whether the user portability utilities (vi, ex, man) are provided
#define _XOPEN_CRYPT						_SPEC_SUPPORTED		///< Whether crypt(), encrypt() and setkey() are implemented
#define _XOPEN_ENH_I18N						_SPEC_SUPPORTED		///< Whether the enhanced internationalization features are supported
#define _XOPEN_REALTIME						_SPEC_SUPPORTED		///< Whether the XSI realtime option group is supported
#define _XOPEN_REALTIME_THREADS				_SPEC_SUPPORTED		///< Whether the XSI realtime threads option group is supported
#define _XOPEN_SHM							_SPEC_SUPPORTED		///< Whether XSI shared memory is implemented
#define _XOPEN_UNIX							_SPEC_SUPPORTED		///< Whether the XSI extension option is supported
#define _XOPEN_UUCP							_PLATFORM_SUPPORTED	///< Whether the UUCP utilities are provided

// Type sizes
#if (__SIZEOF_INT__ == 4) && (__SIZEOF_LONG__ == 4) && (__SIZEOF_POINTER__ == 4)
	#if (__SIZEOF_OFF_T__ == 4)
		#define _POSIX_V7_ILP32_OFF32
		#define _POSIX_V8_ILP32_OFF32
	#else
		#define _POSIX_V7_ILP32_OFFBIG
		#define _POSIX_V8_ILP32_OFFBIG
	#endif
#elif (__SIZEOF_INT__ == 4) && (__SIZEOF_LONG__ == 8) && (__SIZEOF_POINTER__ == 8)
	#if (__SIZEOF_OFF_T__ == 8)
		#define _POSIX_V7_LP64_OFF64
		#define _POSIX_V8_LP64_OFF64
	#else
		#define _POSIX_V7_LPBIG_OFFBIG
		#define _POSIX_V8_LPBIG_OFFBIG
	#endif
#elif (__SIZEOF_INT__ >= 4) && (__SIZEOF_LONG__ >= 8) &&(__SIZEOF_POINTER__ >= 8) && (__SIZEOF_OFF_T__ >= 8)
	#define _POSIX_V7_LPBIG_OFFBIG
	#define _POSIX_V8_LPBIG_OFFBIG
#endif

// Per file capabilities
#define _POSIX_ASYNC_IO						_PLATFORM_SUPPORTED	///< Whether asynchronous I/O can be performed for the associated file
#define _POSIX_FALLOC						_PLATFORM_SUPPORTED	///< Whether posix_fallocate() is supported by the associated file
#define _POSIX_PRIO_IO						_PLATFORM_SUPPORTED	///< Whether prioritized I/O can be performed for the associated file
#define _POSIX_SYNC_IO						_PLATFORM_SUPPORTED	///< Whether synchronized I/O can be performed for the associated file
#define _POSIX_TIMESTAMP_RESOLUTION			1000000000			///< The resolution in nanoseconds for all file timestamps (@todo platform specific)
#define _POSIX2_SYMLINKS					_PLATFORM_SUPPORTED	///< Whether symbolic links can be created

// access() modes
#define F_OK 0	///< Test for existence of file
#define R_OK 4	///< Test for read permission
#define W_OK 2	///< Test for write permission
#define X_OK 1	///< Test for execute permission

// confstr() names
#define _CS_PATH							0					///< The value for PATH that finds all of the standard utilities
#define _CS_POSIX_V8_ILP32_OFF32_CFLAGS		1					///< The initial c17 options to build an application with 32-bit int, long, off_t and pointer types
#define _CS_POSIX_V8_ILP32_OFF32_LDFLAGS	2					///< The final c17 options to build an application with 32-bit int, long, off_t and pointer types
#define _CS_POSIX_V8_ILP32_OFF32_LIBS		3					///< The libraries for c17 to build an application with 32-bit int, long, off_t and pointer types
#define _CS_POSIX_V8_ILP32_OFFBIG_CFLAGS	4					///< The initial c17 options to build an application with 32-bit int, long and pointer types and an off_t of at least 64 bits
#define _CS_POSIX_V8_ILP32_OFFBIG_LDFLAGS	5					///< The final c17 options to build an application with 32-bit int, long and pointer types and an off_t of at least 64 bits
#define _CS_POSIX_V8_ILP32_OFFBIG_LIBS		6					///< The libraries for c17 to build an application with 32-bit int, long and pointer types and an off_t of at least 64 bits
#define _CS_POSIX_V8_LP64_OFF64_CFLAGS		7					///< The initial c17 options to build an application with a 32-bit int and 64-bit long, off_t and pointer types
#define _CS_POSIX_V8_LP64_OFF64_LDFLAGS		8					///< The final c17 options to build an application with a 32-bit int and 64-bit long, off_t and pointer types
#define _CS_POSIX_V8_LP64_OFF64_LIBS		9					///< The libraries for c17 to build an application with a 32-bit int and 64-bit long, off_t and pointer types
#define _CS_POSIX_V8_LPBIG_OFFBIG_CFLAGS	10					///< The initial c17 options to build an application with an int of at least 32 bits and long, off_t and pointer types of at least 64 bits
#define _CS_POSIX_V8_LPBIG_OFFBIG_LDFLAGS	11					///< The final c17 options to build an application with an int of at least 32 bits and long, off_t and pointer types of at least 64 bits
#define _CS_POSIX_V8_LPBIG_OFFBIG_LIBS		12					///< The libraries for c17 to build an application with an int of at least 32 bits and long, off_t and pointer types of at least 64 bits
#define _CS_POSIX_V8_THREADS_CFLAGS			13					///< The initial c17 options to build a multi-threaded application (in addition to the type size ones)
#define _CS_POSIX_V8_THREADS_LDFLAGS		14					///< The final c17 options to build a multi-threaded application (in addition to the type size ones)
#define _CS_POSIX_V8_WIDTH_RESTRICTED_ENVS	15					///< Newline separated list of environments where the widths of the POSIX types are no greater than long
#define _CS_V8_ENV							16					///< The environment variable information (other than PATH) required to create a conforming environment

// Issue 7 compatibility (reserved for compatibility)
#define _CS_POSIX_V7_ILP32_OFF32_CFLAGS		_CS_POSIX_V8_ILP32_OFF32_CFLAGS		///< Issue 7 compatibility for _CS_POSIX_V8_ILP32_OFF32_CFLAGS
#define _CS_POSIX_V7_ILP32_OFF32_LDFLAGS	_CS_POSIX_V8_ILP32_OFF32_LDFLAGS	///< Issue 7 compatibility for _CS_POSIX_V8_ILP32_OFF32_LDFLAGS
#define _CS_POSIX_V7_ILP32_OFF32_LIBS		_CS_POSIX_V8_ILP32_OFF32_LIBS		///< Issue 7 compatibility for _CS_POSIX_V8_ILP32_OFF32_LIBS
#define _CS_POSIX_V7_ILP32_OFFBIG_CFLAGS	_CS_POSIX_V8_ILP32_OFFBIG_CFLAGS	///< Issue 7 compatibility for _CS_POSIX_V8_ILP32_OFFBIG_CFLAGS
#define _CS_POSIX_V7_ILP32_OFFBIG_LDFLAGS	_CS_POSIX_V8_ILP32_OFFBIG_LDFLAGS	///< Issue 7 compatibility for _CS_POSIX_V8_ILP32_OFFBIG_LDFLAGS
#define _CS_POSIX_V7_ILP32_OFFBIG_LIBS		_CS_POSIX_V8_ILP32_OFFBIG_LIBS		///< Issue 7 compatibility for _CS_POSIX_V8_ILP32_OFFBIG_LIBS
#define _CS_POSIX_V7_LP64_OFF64_CFLAGS		_CS_POSIX_V8_LP64_OFF64_CFLAGS		///< Issue 7 compatibility for _CS_POSIX_V8_LP64_OFF64_CFLAGS
#define _CS_POSIX_V7_LP64_OFF64_LDFLAGS		_CS_POSIX_V8_LP64_OFF64_LDFLAGS		///< Issue 7 compatibility for _CS_POSIX_V8_LP64_OFF64_LDFLAGS
#define _CS_POSIX_V7_LP64_OFF64_LIBS		_CS_POSIX_V8_LP64_OFF64_LIBS		///< Issue 7 compatibility for _CS_POSIX_V8_LP64_OFF64_LIBS
#define _CS_POSIX_V7_LPBIG_OFFBIG_CFLAGS	_CS_POSIX_V8_LPBIG_OFFBIG_CFLAGS	///< Issue 7 compatibility for _CS_POSIX_V8_LPBIG_OFFBIG_CFLAGS
#define _CS_POSIX_V7_LPBIG_OFFBIG_LDFLAGS	_CS_POSIX_V8_LPBIG_OFFBIG_LDFLAGS	///< Issue 7 compatibility for _CS_POSIX_V8_LPBIG_OFFBIG_LDFLAGS
#define _CS_POSIX_V7_LPBIG_OFFBIG_LIBS		_CS_POSIX_V8_LPBIG_OFFBIG_LIBS		///< Issue 7 compatibility for _CS_POSIX_V8_LPBIG_OFFBIG_LIBS
#define _CS_POSIX_V7_THREADS_CFLAGS			_CS_POSIX_V8_THREADS_CFLAGS			///< Issue 7 compatibility for _CS_POSIX_V8_THREADS_CFLAGS
#define _CS_POSIX_V7_THREADS_LDFLAGS		_CS_POSIX_V8_THREADS_LDFLAGS		///< Issue 7 compatibility for _CS_POSIX_V8_THREADS_LDFLAGS
#define _CS_POSIX_V7_WIDTH_RESTRICTED_ENVS	_CS_POSIX_V8_WIDTH_RESTRICTED_ENVS	///< Issue 7 compatibility for _CS_POSIX_V8_WIDTH_RESTRICTED_ENVS
#define _CS_V7_ENV							_CS_V8_ENV							///< Issue 7 compatibility for _CS_V8_ENV

// lseek() extensions
#define SEEK_DATA 3	///< Seek forwards from offset relative to start-of-file for a position not within a hole
#define SEEK_HOLE 4 ///< Seek forwards from offset relative to start-of-file for a position within a hole

// lockf() functions
#define F_ULOCK	0	///< Unlock locked sections
#define F_LOCK	1	///< Lock a section for exclusive use
#define F_TLOCK	2	///< Test and lock a section for exclusive use
#define F_TEST	3	///< Test section for locks by other processes

// pathconf() names
#define _PC_2_SYMLINKS				0	///< Whether symbolic links can be created in the directory
#define _PC_ALLOC_SIZE_MIN			1	///< Minimum number of bytes of storage allocated for any portion of the file
#define _PC_ASYNC_IO				2	///< Whether asynchronous I/O can be performed for the file
#define _PC_CHOWN_RESTRICTED		3	///< Whether only root can change the ownership of the file
#define _PC_FALLOC					4	///< Whether posix_fallocate() is supported by the file
#define _PC_FILESIZEBITS			5	///< Minimum number of bits needed to represent the maximum file size as a signed integer
#define _PC_LINK_MAX				6	///< Maximum number of links to the file
#define _PC_MAX_CANON				7	///< Maximum number of bytes in a terminal canonical input line
#define _PC_MAX_INPUT				8	///< Minimum number of bytes for which space is available in a terminal input queue
#define _PC_NAME_MAX				9	///< Maximum number of bytes in a filename (not including the terminating null)
#define _PC_NO_TRUNC				10	///< Whether paths longer than NAME_MAX will error rather than being truncated
#define _PC_PATH_MAX				11	///< Maximum number of bytes in a pathname (including the terminating null)
#define _PC_PIPE_BUF				12	///< Maximum number of bytes that can be written atomically to a pipe
#define _PC_PRIO_IO					13	///< Whether prioritized I/O can be performed for the file
#define _PC_REC_INCR_XFER_SIZE		14	///< Recommended increment for file transfer sizes between the minimum and maximum
#define _PC_REC_MAX_XFER_SIZE		15	///< Maximum recommended file transfer size
#define _PC_REC_MIN_XFER_SIZE		16	///< Minimum recommended file transfer size
#define _PC_REC_XFER_ALIGN			17	///< Recommended file transfer buffer alignment
#define _PC_SYMLINK_MAX				18	///< Maximum number of bytes in a symbolic link
#define _PC_SYNC_IO					19	///< Whether synchronized I/O can be performed for the file
#define _PC_TEXTDOMAIN_MAX			20	///< Maximum number of bytes in a textdomain name
#define _PC_TIMESTAMP_RESOLUTION	21	///< The resolution in nanoseconds of the file timestamps
#define _PC_VDISABLE				22	///< The character that disables terminal special character handling

// sysconf() names
#define _SC_2_C_BIND						0				///< The run-time value of _POSIX2_C_BIND
#define _SC_2_C_DEV							1				///< The run-time value of _POSIX2_C_DEV
#define _SC_2_CHAR_TERM						2				///< The run-time value of _POSIX2_CHAR_TERM
#define _SC_2_FORT_RUN						3				///< The run-time value of _POSIX2_FORT_RUN
#define _SC_2_LOCALEDEF						4				///< The run-time value of _POSIX2_LOCALEDEF
#define _SC_2_SW_DEV						5				///< The run-time value of _POSIX2_SW_DEV
#define _SC_2_UPE							6				///< The run-time value of _POSIX2_UPE
#define _SC_2_VERSION						7				///< The version of the POSIX shell and utilities that the system complies with
#define _SC_ADVISORY_INFO					8				///< The run-time value of _POSIX_ADVISORY_INFO
#define _SC_AIO_LISTIO_MAX					9				///< Maximum number of I/O operations in a single list I/O call
#define _SC_AIO_MAX							10				///< Maximum number of outstanding asynchronous I/O operations
#define _SC_AIO_PRIO_DELTA_MAX				11				///< Maximum amount a process can decrease its asynchronous I/O priority level
#define _SC_ARG_MAX							12				///< Maximum length of the arguments (including the environment) to the exec functions
#define _SC_ASYNCHRONOUS_IO					13				///< The run-time value of _POSIX_ASYNCHRONOUS_IO
#define _SC_ATEXIT_MAX						14				///< Maximum number of functions that can be registered with atexit()
#define _SC_BARRIERS						15				///< The run-time value of _POSIX_BARRIERS
#define _SC_BC_BASE_MAX						16				///< Maximum obase value allowed by the bc utility
#define _SC_BC_DIM_MAX						17				///< Maximum number of elements permitted in an array by the bc utility
#define _SC_BC_SCALE_MAX					18				///< Maximum scale value allowed by the bc utility
#define _SC_BC_STRING_MAX					19				///< Maximum length of a string constant accepted by the bc utility
#define _SC_CHILD_MAX						20				///< Maximum number of simultaneous processes per user ID
#define _SC_CLK_TCK							21				///< Number of clock ticks per second
#define _SC_CLOCK_SELECTION					22				///< The run-time value of _POSIX_CLOCK_SELECTION
#define _SC_COLL_WEIGHTS_MAX				23				///< Maximum number of weights that can be assigned to an entry of the LC_COLLATE order keyword
#define _SC_CPUTIME							24				///< The run-time value of _POSIX_CPUTIME
#define _SC_DELAYTIMER_MAX					25				///< Maximum number of timer expiration overruns
#define _SC_DEVICE_CONTROL					26				///< The run-time value of _POSIX_DEVICE_CONTROL
#define _SC_EXPR_NEST_MAX					27				///< Maximum number of expressions that can be nested within parentheses by the expr utility
#define _SC_FSYNC							28				///< The run-time value of _POSIX_FSYNC
#define _SC_GETGR_R_SIZE_MAX				29				///< Initial size of the buffer used by getgrgid_r() and getgrnam_r()
#define _SC_GETPW_R_SIZE_MAX				30				///< Initial size of the buffer used by getpwuid_r() and getpwnam_r()
#define _SC_HOST_NAME_MAX					31				///< Maximum length of a host name (not including the terminating null)
#define _SC_IOV_MAX							32				///< Maximum number of iovec structures that can be used in a single readv() or writev()
#define _SC_IPV6							33				///< The run-time value of _POSIX_IPV6
#define _SC_JOB_CONTROL						34				///< The run-time value of _POSIX_JOB_CONTROL
#define _SC_LINE_MAX						35				///< Maximum length of a utility's input line
#define _SC_LOGIN_NAME_MAX					36				///< Maximum length of a login name
#define _SC_MAPPED_FILES					37				///< The run-time value of _POSIX_MAPPED_FILES
#define _SC_MEMLOCK							38				///< The run-time value of _POSIX_MEMLOCK
#define _SC_MEMLOCK_RANGE					39				///< The run-time value of _POSIX_MEMLOCK_RANGE
#define _SC_MEMORY_PROTECTION				40				///< The run-time value of _POSIX_MEMORY_PROTECTION
#define _SC_MESSAGE_PASSING					41				///< The run-time value of _POSIX_MESSAGE_PASSING
#define _SC_MONOTONIC_CLOCK					42				///< The run-time value of _POSIX_MONOTONIC_CLOCK
#define _SC_MQ_OPEN_MAX						43				///< Maximum number of open message queues per process
#define _SC_MQ_PRIO_MAX						44				///< Maximum number of message priorities
#define _SC_NGROUPS_MAX						45				///< Maximum number of simultaneous supplementary group IDs per process
#define _SC_NPROCESSORS_CONF				46				///< Number of processors configured
#define _SC_NPROCESSORS_ONLN				47				///< Number of processors currently online
#define _SC_NSIG							48				///< One greater than the largest signal number
#define _SC_OPEN_MAX						49				///< Maximum number of files that a process can have open at once
#define _SC_PAGE_SIZE						50				///< Size of a page in bytes
#define _SC_PAGESIZE						_SC_PAGE_SIZE	///< Same value as _SC_PAGE_SIZE
#define _SC_PRIORITIZED_IO					51				///< The run-time value of _POSIX_PRIORITIZED_IO
#define _SC_PRIORITY_SCHEDULING				52				///< The run-time value of _POSIX_PRIORITY_SCHEDULING
#define _SC_RAW_SOCKETS						53				///< The run-time value of _POSIX_RAW_SOCKETS
#define _SC_RE_DUP_MAX						54				///< Maximum number of repeated occurrences of a BRE or ERE interval expression
#define _SC_READER_WRITER_LOCKS				55				///< The run-time value of _POSIX_READER_WRITER_LOCKS
#define _SC_REALTIME_SIGNALS				56				///< The run-time value of _POSIX_REALTIME_SIGNALS
#define _SC_REGEXP							57				///< The run-time value of _POSIX_REGEXP
#define _SC_RTSIG_MAX						58				///< Maximum number of realtime signals reserved for application use
#define _SC_SAVED_IDS						59				///< The run-time value of _POSIX_SAVED_IDS
#define _SC_SEM_NSEMS_MAX					60				///< Maximum number of semaphores that a process can have open
#define _SC_SEM_VALUE_MAX					61				///< Maximum value a semaphore can have
#define _SC_SEMAPHORES						62				///< The run-time value of _POSIX_SEMAPHORES
#define _SC_SHARED_MEMORY_OBJECTS			63				///< The run-time value of _POSIX_SHARED_MEMORY_OBJECTS
#define _SC_SHELL							64				///< The run-time value of _POSIX_SHELL
#define _SC_SIGQUEUE_MAX					65				///< Maximum number of queued signals that a process can send and have pending
#define _SC_SPAWN							66				///< The run-time value of _POSIX_SPAWN
#define _SC_SPIN_LOCKS						67				///< The run-time value of _POSIX_SPIN_LOCKS
#define _SC_SPORADIC_SERVER					68				///< The run-time value of _POSIX_SPORADIC_SERVER
#define _SC_SS_REPL_MAX						69				///< Maximum number of replenishment operations that can be pending for a sporadic server
#define _SC_STREAM_MAX						70				///< Maximum number of streams that a process can have open at once
#define _SC_SYMLOOP_MAX						71				///< Maximum number of symbolic links that can be traversed in the resolution of a pathname
#define _SC_SYNCHRONIZED_IO					72				///< The run-time value of _POSIX_SYNCHRONIZED_IO
#define _SC_THREAD_ATTR_STACKADDR			73				///< The run-time value of _POSIX_THREAD_ATTR_STACKADDR
#define _SC_THREAD_ATTR_STACKSIZE			74				///< The run-time value of _POSIX_THREAD_ATTR_STACKSIZE
#define _SC_THREAD_CPUTIME					75				///< The run-time value of _POSIX_THREAD_CPUTIME
#define _SC_THREAD_DESTRUCTOR_ITERATIONS	76				///< Maximum number of attempts made to destroy the thread-specific data of a thread on exit
#define _SC_THREAD_KEYS_MAX					77				///< Maximum number of data keys that can be created by a process
#define _SC_THREAD_PRIO_INHERIT				78				///< The run-time value of _POSIX_THREAD_PRIO_INHERIT
#define _SC_THREAD_PRIO_PROTECT				79				///< The run-time value of _POSIX_THREAD_PRIO_PROTECT
#define _SC_THREAD_PRIORITY_SCHEDULING		80				///< The run-time value of _POSIX_THREAD_PRIORITY_SCHEDULING
#define _SC_THREAD_PROCESS_SHARED			81				///< The run-time value of _POSIX_THREAD_PROCESS_SHARED
#define _SC_THREAD_ROBUST_PRIO_INHERIT		82				///< The run-time value of _POSIX_THREAD_ROBUST_PRIO_INHERIT
#define _SC_THREAD_ROBUST_PRIO_PROTECT		83				///< The run-time value of _POSIX_THREAD_ROBUST_PRIO_PROTECT
#define _SC_THREAD_SAFE_FUNCTIONS			84				///< The run-time value of _POSIX_THREAD_SAFE_FUNCTIONS
#define _SC_THREAD_SPORADIC_SERVER			85				///< The run-time value of _POSIX_THREAD_SPORADIC_SERVER
#define _SC_THREAD_STACK_MIN				86				///< Minimum size in bytes of a thread stack
#define _SC_THREAD_THREADS_MAX				87				///< Maximum number of threads per process
#define _SC_THREADS							88				///< The run-time value of _POSIX_THREADS
#define _SC_TIMEOUTS						89				///< The run-time value of _POSIX_TIMEOUTS
#define _SC_TIMER_MAX						90				///< Maximum number of timers per process
#define _SC_TIMERS							91				///< The run-time value of _POSIX_TIMERS
#define _SC_TTY_NAME_MAX					92				///< Maximum length of a terminal device name
#define _SC_TYPED_MEMORY_OBJECTS			93				///< The run-time value of _POSIX_TYPED_MEMORY_OBJECTS
#define _SC_TZNAME_MAX						94				///< Maximum number of bytes supported for the name of a time zone
#define _SC_V8_ILP32_OFF32					95				///< Whether the programming model with 32-bit int, long, off_t and pointer types is supported
#define _SC_V8_ILP32_OFFBIG					96				///< Whether the programming model with 32-bit int, long and pointer types and a 64-bit off_t is supported
#define _SC_V8_LP64_OFF64					97				///< Whether the programming model with a 32-bit int and 64-bit long, off_t and pointer types is supported
#define _SC_V8_LPBIG_OFFBIG					98				///< Whether the programming model with an int of at least 32 bits and the rest of at least 64 bits is supported
#define _SC_VERSION							99				///< The year and month of the POSIX standard that the system complies with
#define _SC_XOPEN_CRYPT						100				///< The run-time value of _XOPEN_CRYPT
#define _SC_XOPEN_ENH_I18N					101				///< The run-time value of _XOPEN_ENH_I18N
#define _SC_XOPEN_REALTIME					102				///< The run-time value of _XOPEN_REALTIME
#define _SC_XOPEN_REALTIME_THREADS			103				///< The run-time value of _XOPEN_REALTIME_THREADS
#define _SC_XOPEN_SHM						104				///< The run-time value of _XOPEN_SHM
#define _SC_XOPEN_UNIX						105				///< The run-time value of _XOPEN_UNIX
#define _SC_XOPEN_UUCP						106				///< The run-time value of _XOPEN_UUCP
#define _SC_XOPEN_VERSION					107				///< The version of the X/Open Portability Guide that the system complies with

// Issue 7 compatibility (reserved for compatibility)
#define _SC_V7_ILP32_OFF32					_SC_V8_ILP32_OFF32	///< Issue 7 compatibility for _SC_V8_ILP32_OFF32
#define _SC_V7_ILP32_OFFBIG					_SC_V8_ILP32_OFFBIG	///< Issue 7 compatibility for _SC_V8_ILP32_OFFBIG
#define _SC_V7_LP64_OFF64					_SC_V8_LP64_OFF64	///< Issue 7 compatibility for _SC_V8_LP64_OFF64
#define _SC_V7_LPBIG_OFFBIG					_SC_V8_LPBIG_OFFBIG	///< Issue 7 compatibility for _SC_V8_LPBIG_OFFBIG

// File streams
#define STDIN_FILENO	0	///< File number of stdin
#define STDOUT_FILENO	1	///< File number of stdout
#define STDERR_FILENO	2	///< File number of stderr

// Terminals / close
#define _POSIX_VDISABLE		'\0'	///< Value of the character that disables terminal special character handling
#define POSIX_CLOSE_RESTART	1		///< Allows restarts if a signal interrupts a close operation

int          access(const char *, int);
unsigned     alarm(unsigned);
int          chdir(const char *);
int          chown(const char *, uid_t, gid_t);
int          close(int);
size_t       confstr(int, char *, size_t);
char*        crypt(const char *, const char *);
int          dup(int);

int          dup2(int, int);
int          dup3(int, int, int);
_Noreturn void _exit(int);
void         encrypt(char [64], int);
int          execl(const char *, const char *, ...);
int          execle(const char *, const char *, ...);
int          execlp(const char *, const char *, ...);
int          execv(const char *, char *const []);
int          execve(const char *, char *const [], char *const []);
int          execvp(const char *, char *const []);
int          faccessat(int, const char *, int, int);
int          fchdir(int);
int          fchown(int, uid_t, gid_t);
int          fchownat(int, const char *, uid_t, gid_t, int);
int          fdatasync(int);
int          fexecve(int, char *const [], char *const []);
pid_t        _Fork(void);
pid_t        fork(void);
long         fpathconf(int, int);
int          fsync(int);
int          ftruncate(int, off_t);
char*        getcwd(char *, size_t);
gid_t        getegid(void);
int          getentropy(void *, size_t);
uid_t        geteuid(void);
gid_t        getgid(void);
int          getgroups(int, gid_t []);
long         gethostid(void);
int          gethostname(char *, size_t);
char*        getlogin(void);
int          getlogin_r(char *, size_t);
int          getopt(int, char * const [], const char *);
pid_t        getpgid(pid_t);
pid_t        getpgrp(void);
pid_t        getpid(void);
pid_t        getppid(void);
int          getresgid(gid_t *restrict, gid_t *restrict, gid_t *restrict);
int          getresuid(uid_t *restrict, uid_t *restrict, uid_t *restrict);
pid_t        getsid(pid_t);
uid_t        getuid(void);
int          isatty(int);
int          lchown(const char *, uid_t, gid_t);
int          link(const char *, const char *);
int          linkat(int, const char *, int, const char *, int);
int          lockf(int, int, off_t);
off_t        lseek(int, off_t, int);
int          nice(int);
long         pathconf(const char *, int);
int          pause(void);
int          pipe(int [2]);
int          pipe2(int [2], int);
int          posix_close(int, int);
ssize_t      pread(int, void *, size_t, off_t);
ssize_t      pwrite(int, const void *, size_t, off_t);
ssize_t      read(int, void *, size_t);
ssize_t      readlink(const char *restrict, char *restrict, size_t);
ssize_t      readlinkat(int, const char *restrict, char *restrict, size_t);
int          rmdir(const char *);
int          setegid(gid_t);
int          seteuid(uid_t);
int          setgid(gid_t);


int          setpgid(pid_t, pid_t);
int          setregid(gid_t, gid_t);
int          setresgid(gid_t, gid_t, gid_t);
int          setresuid(uid_t, uid_t, uid_t);
int          setreuid(uid_t, uid_t);
pid_t        setsid(void);
int          setuid(uid_t);
unsigned     sleep(unsigned);
void         swab(const void *restrict, void *restrict, ssize_t);
int          symlink(const char *, const char *);
int          symlinkat(const char *, int, const char *);
void         sync(void);
long         sysconf(int);
pid_t        tcgetpgrp(int);
int          tcsetpgrp(int, pid_t);
int          truncate(const char *, off_t);
char*        ttyname(int);
int          ttyname_r(int, char *, size_t);
int          unlink(const char *);
int          unlinkat(int, const char *, int);
ssize_t      write(int, const void *, size_t);

// Option parsing (used by getopt())
extern char*	optarg;		///< The argument of the option currently being processed, points into argv
extern int		opterr;		///< Whether getopt() prints an error message to stderr for unknown options or missing arguments (default 1)
extern int		optind;		///< Index of the next element of argv that getopt() will process (starts at 1)
extern int		optopt;		///< The option character that was unknown or was missing its argument
CPP_END

#endif //LIBC_UINSTD_H