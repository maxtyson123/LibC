/**
 * @file uinstd.h
 * @brief Defines tests to check POSIX compliance with optional features
 *
 * @date 28 December 2025
 * @author Max Tyson
 */

#include <libc_common.h>
#include <stdint.h>

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
#define _POSIX_READER_WRITER_LOCKS			_SPEC_SUPPORTED		///< Whether
#define _POSIX_REALTIME_SIGNALS				_SPEC_SUPPORTED		///< Whether
#define _POSIX_REGEXP						_PLATFORM_SUPPORTED	///< Whether
#define _POSIX_SAVED_IDS					_PLATFORM_SUPPORTED	///< Whether
#define _POSIX_SEMAPHORES					_SPEC_SUPPORTED		///< Whether
#define _POSIX_SHARED_MEMORY_OBJECTS		_PLATFORM_SUPPORTED	///< Whether
#define _POSIX_SHELL						_PLATFORM_SUPPORTED	///< Whether
#define _POSIX_SPAWN						_PLATFORM_SUPPORTED	///< Whether
#define _POSIX_SPIN_LOCKS					_SPEC_SUPPORTED		///< Whether
#define _POSIX_SPORADIC_SERVER				_PLATFORM_SUPPORTED	///< Whether
#define _POSIX_SYNCHRONIZED_IO				_PLATFORM_SUPPORTED	///< Whether
#define _POSIX_THREAD_ATTR_STACKADDR		_PLATFORM_SUPPORTED	///< Whether
#define _POSIX_THREAD_ATTR_STACKSIZE		_PLATFORM_SUPPORTED	///< Whether
#define _POSIX_THREAD_CPUTIME				_PLATFORM_SUPPORTED	///< Whether
#define _POSIX_THREAD_PRIO_INHERIT			_PLATFORM_SUPPORTED	///< Whether
#define _POSIX_THREAD_PRIO_PROTECT			_PLATFORM_SUPPORTED	///< Whether
#define _POSIX_THREAD_PRIORITY_SCHEDULING	_PLATFORM_SUPPORTED	///< Whether
#define _POSIX_THREAD_PROCESS_SHARED		_PLATFORM_SUPPORTED	///< Whether
#define _POSIX_THREAD_ROBUST_PRIO_INHERIT	_PLATFORM_SUPPORTED	///< Whether
#define _POSIX_THREAD_ROBUST_PRIO_PROTECT	_PLATFORM_SUPPORTED	///< Whether
#define _POSIX_THREAD_SAFE_FUNCTIONS		_SPEC_SUPPORTED		///< Whether
#define _POSIX_THREAD_SPORADIC_SERVER		_PLATFORM_SUPPORTED	///< Whether
#define _POSIX_THREADS						_SPEC_SUPPORTED		///< Whether
#define _POSIX_TIMEOUTS						_SPEC_SUPPORTED		///< Whether
#define _POSIX_TIMERS						_SPEC_SUPPORTED		///< Whether
#define _POSIX_TYPED_MEMORY_OBJECTS			_PLATFORM_SUPPORTED	///< Whether
#define _POSIX2_C_BIND						_SPEC_SUPPORTED		///< Whether
#define _POSIX2_C_DEV						_PLATFORM_SUPPORTED	///< Whether
#define _POSIX2_CHAR_TERM					_PLATFORM_SUPPORTED	///< Whether
#define _POSIX2_FORT_RUN					_PLATFORM_SUPPORTED	///< Whether
#define _POSIX2_LOCALEDEF					_PLATFORM_SUPPORTED	///< Whether
#define _POSIX2_SW_DEV						_PLATFORM_SUPPORTED	///< Whether
#define _POSIX2_UPE							_PLATFORM_SUPPORTED	///< Whether
#define _XOPEN_CRYPT						_SPEC_SUPPORTED		///< Whether
#define _XOPEN_ENH_I18N						_SPEC_SUPPORTED		///< Whether
#define _XOPEN_REALTIME						_SPEC_SUPPORTED		///< Whether
#define _XOPEN_REALTIME_THREADS				_SPEC_SUPPORTED		///< Whether
#define _XOPEN_SHM							_SPEC_SUPPORTED		///< Whether
#define _XOPEN_UNIX							_SPEC_SUPPORTED		///< Whether
#define _XOPEN_UUCP							_PLATFORM_SUPPORTED	///< Whether

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


CPP_END

#endif //LIBC_UINSTD_H