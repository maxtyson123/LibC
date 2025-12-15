/**
 * @file types.h
 * @brief Defines the common types used throughout libc
 *
 * @see https://pubs.opengroup.org/onlinepubs/9699919799/basedefs/sys_stat.h.html
 *
 * @date 15 December 2025
 * @author Max Tyson
 */

#include <libc_common.h>
#include <stdint.h>

#ifndef LIBC_SYS_TYPES_H
#define LIBC_SYS_TYPES_H

CPP_START

typedef int64_t     blkcnt_t;       ///< Number of blocks in a file
typedef int64_t     blksize_t;      ///< Size of a single file
typedef uint64_t    fsblkcnt_t;     ///< Number of block in the whole filesystem
typedef uint64_t    fsfilcnt_t;     ///< Number of inodes in the whole filesystem
typedef uint64_t    ino_t;          ///< Inode number
typedef uint64_t    nlink_t;        ///< Hardlink count
typedef uint64_t    off_t;          ///< How many bytes offset into a file
typedef uint32_t    mode_t;         ///< File type and permissions

typedef int64_t     clock_t;        ///< CPU time in ticks
typedef int32_t     clockid_t;      ///< Clock selector ID
typedef int64_t     time_t;         ///< Seconds since epoch
typedef int64_t     suseconds_t;    ///< Microseconds
typedef uintptr_t   timer_t;        ///< Timer handle

typedef uint64_t    dev_t;          ///< Device ID
typedef int32_t     key_t;          ///< IPC Lookup key

typedef int32_t     pid_t;          ///< Process ID (negatives for groups)
typedef uint32_t    id_t;           ///< Generic ID
typedef id_t        uid_t;          ///< User ID
typedef id_t        gid_t;          ///< Group ID

typedef uintptr_t   pthread_t;      ///< Thread reference
typedef uint32_t    pthread_key_t;  ///< Thread data key index
typedef int32_t     pthread_once_t; ///< Thread init state

typedef uintptr_t   pthread_attr_t;         ///< Thread attribute object
typedef uintptr_t   pthread_barrier_t;      ///<
typedef uintptr_t   pthread_barrierattr_t;  ///<
typedef uintptr_t   pthread_cond_t;         ///<
typedef uintptr_t   pthread_condattr_t;     ///<
typedef uintptr_t   pthread_mutex_t;        ///<
typedef uintptr_t   pthread_mutexattr_t;    ///<
typedef uintptr_t   pthread_rwlock_t;       ///<
typedef uintptr_t   pthread_rwlockattr_t;   ///<
typedef uintptr_t   pthread_spinlock_t;     ///<

typedef uint32_t    trace_id_t;         ///< The ID of a trace stream
typedef uint32_t    trace_event_id_t;   ///< The ID of a trace event
typedef uintptr_t   trace_attr_t;       ///< The object containing the trace atributes
typedef uintptr_t   trace_event_set_t;  ///< The object containing the event type

typedef uint64_t    size_t;     ///< Largest size this system can store
typedef int64_t     ssize_t;    ///< Largest signed size this system can store

CPP_END

#endif //LIBC_SYS_TYPES_H