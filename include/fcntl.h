/**
 * @file fcntl.h
 * @brief Provides support for file control operations, opening and changing files
 *
 * @see https://pubs.opengroup.org/onlinepubs/9799919799/basedefs/fcntl.h.html
 *
 * @date 29 October 2026
 * @author Max Tyson
 */

#include <libc_common.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>

#ifndef LIBC_FCNTL_H
#define LIBC_FCNTL_H

CPP_START

/**
 * @struct f_owner_ex
 * @brief Internal representation for the owner used by F_GETOWN_EX and F_SETOWN_EX
 *
 * @typedef f_owner_ex
 * @brief Public alias for f_owner_ex
 */
typedef struct f_owner_ex
{
	int		type;	///< Discriminator for pid
	pid_t	pid;	///< Process ID or process group ID

} f_owner_ex;

/**
 * @struct flock
 * @brief Internal representation for a file lock
 *
 * @typedef flock_t
 * @brief Public alias for flock
 */
typedef struct flock
{
	short	l_type;		///< Type of lock
	short	l_whence;	///< Flag for starting offset
	off_t	l_start;	///< Relative offset in bytes
	off_t	l_len;		///< Size; if 0 then until EOF
	pid_t	l_pid;		///< For a process-owned file lock, ignored on input or the process ID of the owning process on output; for an OFD-owned file lock, zero on input or (pid_t)-1 on output

} flock_t;

// fcntl() commands
#define F_DUPFD								0					///< Duplicate file descriptor
#define F_DUPFD_CLOEXEC						1					///< Duplicate file descriptor with the close-on-exec flag FD_CLOEXEC set
#define F_DUPFD_CLOFORK						2					///< Duplicate file descriptor with the close-on-fork flag FD_CLOFORK set
#define F_GETFD								3					///< Get file descriptor flags
#define F_SETFD								4					///< Set file descriptor flags
#define F_GETFL								5					///< Get file status flags and file access modes
#define F_SETFL								6					///< Set file status flags
#define F_GETLK								7					///< Get information about file locks
#define F_SETLK								8					///< Set a process-owned file lock
#define F_SETLKW							9					///< Set a process-owned file lock; wait if blocked
#define F_OFD_GETLK							10					///< Get information about file locks
#define F_OFD_SETLK							11					///< Set an OFD-owned file lock
#define F_OFD_SETLKW						12					///< Set an OFD-owned file lock; wait if blocked
#define F_GETOWN							13					///< Get process or process group ID to receive SIGURG signals, via int type
#define F_GETOWN_EX							14					///< Get process or process group ID to receive SIGURG signals, via pid_t type
#define F_SETOWN							15					///< Set process or process group ID to receive SIGURG signals, via int type
#define F_SETOWN_EX							16					///< Set process or process group ID to receive SIGURG signals, via pid_t type

// File descriptor flags
#define FD_CLOEXEC							1					///< Close the file descriptor upon execution of an exec family function and in the new process image created by posix_spawn() or posix_spawnp()
#define FD_CLOFORK							2					///< Close the file descriptor in any child process created from a process that has the file descriptor open; that is, the child shall not inherit the file descriptor

// Lock types
#define F_RDLCK								0					///< Shared or read lock
#define F_UNLCK								1					///< Unlock
#define F_WRLCK								2					///< Exclusive or write lock

// Owner types
#define F_OWNER_PID							1					///< The pid member of f_owner_ex holds a process ID
#define F_OWNER_PGRP						2					///< The pid member of f_owner_ex holds a process group ID

// File creation flags
#define O_CLOEXEC							(1 << 0)			///< Atomically set the FD_CLOEXEC flag on the new file descriptor
#define O_CLOFORK							(1 << 1)			///< Atomically set the FD_CLOFORK flag on the new file descriptor
#define O_CREAT								(1 << 2)			///< Create file if it does not exist
#define O_DIRECTORY							(1 << 3)			///< Fail if file is a non-directory file
#define O_EXCL								(1 << 4)			///< Exclusive use flag
#define O_NOCTTY							(1 << 5)			///< Do not assign controlling terminal
#define O_NOFOLLOW							(1 << 6)			///< Do not follow symbolic links
#define O_TRUNC								(1 << 7)			///< Truncate flag
#define O_TTY_INIT							(1 << 8)			///< Set the termios structure terminal parameters to a state that provides conforming behavior (can be zero, so need not be bitwise-distinct)

// File status flags
#define O_APPEND							(1 << 0)			///< Set append mode
#define O_DSYNC								(1 << 1)			///< Write according to synchronized I/O data integrity completion
#define O_NONBLOCK							(1 << 2)			///< Non-blocking mode
#define O_RSYNC								O_SYNC				///< Synchronized read I/O operations
#define O_SYNC								(1 << 3)			///< Write according to synchronized I/O file integrity completion

// File access mode mask
#define O_ACCMODE							((1 << 4) | O_SEARCH)	///< Mask for file access modes

// File access modes (open(), openat() and fcntl())
#define O_EXEC								(1 << 5)			///< Open for execute only (non-directory files), result is unspecified if applied to a directory
#define O_RDONLY							(1 << 6)			///< Open for reading only
#define O_RDWR								(1 << 7)			///< Open for reading and writing
#define O_SEARCH							(1 << 8)			///< Open directory for search only, result is unspecified if applied to a non-directory file
#define O_WRONLY							(1 << 9)			///< Open for writing only


// *at() functions
#define AT_FDCWD							0					///< Use the current working directory to determine the target of relative file paths
#define AT_EACCESS							1					///< faccessat(): Check access using effective user and group ID
#define AT_SYMLINK_NOFOLLOW					2					///< fstatat(), fchmodat(), fchownat(), utimensat(): Do not follow symbolic links
#define AT_SYMLINK_FOLLOW					2					///< linkat(): Follow symbolic link
#define AT_REMOVEDIR						3					///< unlinkat(): Remove directory instead of file

// posix_fadvise() advice
#define POSIX_FADV_DONTNEED					0					///< The application expects that it will not access the specified data in the near future
#define POSIX_FADV_NOREUSE					1					///< The application expects to access the specified data once and then not reuse it thereafter
#define POSIX_FADV_NORMAL					2					///< The application has no advice to give on its behavior with respect to the specified data, the default if no advice is given for an open file
#define POSIX_FADV_RANDOM					3					///< The application expects to access the specified data in a random order
#define POSIX_FADV_SEQUENTIAL				4					///< The application expects to access the specified data sequentially from lower offsets to higher offsets
#define POSIX_FADV_WILLNEED					5					///< The application expects to access the specified data in the near future

// File creation / control
int					creat(const char*, mode_t);
int					fcntl(int, int, ...);
int					open(const char*, int, ...);
int					openat(int, const char*, int, ...);

// Advisory information
int					posix_fadvise(int, off_t, off_t, int);
int					posix_fallocate(int, off_t, off_t);

CPP_END

#endif //LIBC_FCNTL_H