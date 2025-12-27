/**
 * @file stat.h
 * @brief Defines the structure of the data returned by the fstat(), lstat(), and stat() functions.
 *
 * @see https://pubs.opengroup.org/onlinepubs/9699919799/basedefs/sys_stat.h.html
 *
 * @date 15 December 2025
 * @author Max Tyson
 *
 * @todo S_IFIFO etc are linux specific, move to platform (same for S_TYPEISMQ)
 */

#include <libc_common.h>
#include <sys/types.h>
#include <time.h>

#ifndef LIBC_SYS_STAT_H
#define LIBC_SYS_STAT_H

CPP_START

/**
 * @struct stat
 * @brief The status of file
 */
struct stat {

    dev_t st_dev;               ///< Device ID of device containing file.
    ino_t st_ino;               ///< File serial number.

    mode_t st_mode;             ///< Mode of file.
    nlink_t st_nlink;           ///< Number of hard links to the file.
    off_t st_size;              ///< In bytes, the file size / symbolic link path size / memory length

    uid_t st_uid;               ///< User ID of file.
    gid_t st_gid;               ///< Group ID of file.
    dev_t st_rdev;              ///< Device ID (if file is character or block special).

    struct timespec st_atim;    ///< Last data access timestamp.
    struct timespec st_mtim;    ///< Last data modification timestamp.
    struct timespec st_ctim;    ///< Last file status change timestamp.

    blksize_t st_blksize;       ///< The preferred block size
    blkcnt_t st_blocks;         ///< Number of blocks allocated for this object.

};

#define S_IFMT		(0xF000)		///< Bitmap mask to extract the file type from a mode_t value
#define _S_IFMTE(m)	((m) & S_IFMT)	///< Extract the file type info from a given mode_t

#define S_IFIFO		(0x1000)	///< Named pipe (first in-out)
#define S_IFCHR		(0x2000)	///< Character stream device
#define S_IFDIR		(0x4000)	///< Directory
#define S_IFBLK		(0x6000)	///< Storage block device
#define S_IFREG		(0x8000)	///< File
#define S_IFLNK		(0xA000)	///< Link to another file
#define S_IFSOCK	(0xC000)	///< IPC socket

#define S_ISFIFO(m) (_S_IFMTE(m) == S_IFIFO)	///< Test for a pipe or FIFO special file
#define S_ISCHR(m)	(_S_IFMTE(m) == S_IFCHR)	///< Test for a character special file
#define S_ISDIR(m)	(_S_IFMTE(m) == S_IFDIR)	///< Test for a directory
#define S_ISBLK(m)	(_S_IFMTE(m) == S_IFBLK)	///< Test for a block special file
#define S_ISREG(m)	(_S_IFMTE(m) == S_IFREG)	///< Test for a regular file
#define S_ISLNK(m)	(_S_IFMTE(m) == S_IFLNK)	///< Test for a symbolic link
#define S_ISSOCK(m) (_S_IFMTE(m) == S_IFSOCK)	///< Test for a socket

#define S_TYPEISMQ(buf)   0		///< Test for a message queue.
#define S_TYPEISSEM(buf)  0		///< Test for a semaphore
#define S_TYPEISSHM(buf)  0		///< Test for a shared memory object.s
#define S_TYPEISTMO(buf)  0		///< Test macro for a typed memory object.

int    chmod(const char*, mode_t);
int    fchmod(int, mode_t);
int    fchmodat(int, const char *, mode_t, int);

int    fstat(int, struct stat );
int    fstatat(int, const char *restrict, struct stat* restrict, int);
int    lstat(const char* restrict, struct stat* restrict);
int    stat(const char* restrict, struct stat* restrict);

int    futimens(int, const struct timespec [2]);
int    utimensat(int, const char*, const struct timespec [2], int);

int    mkdir(const char*, mode_t);
int    mkdirat(int, const char*, mode_t);
int    mkfifo(const char*, mode_t);
int    mkfifoat(int, const char*, mode_t);
int    mknod(const char*, mode_t, dev_t);
int    mknodat(int, const char*, mode_t, dev_t);

mode_t umask(mode_t);

CPP_END

#endif //LIBC_SYS_STAT_H
