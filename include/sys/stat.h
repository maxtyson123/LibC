/**
 * @file stat.h
 * @brief Defines the structure of the data returned by the fstat(), lstat(), and stat() functions.
 *
 * @see https://pubs.opengroup.org/onlinepubs/9699919799/basedefs/sys_stat.h.html
 *
 * @date 15 December 2025
 * @author Max Tyson
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

    blksize_t st_blksize;       ///< The preffered block size
    blkcnt_t st_blocks;         ///< Number of blocks allocated for this object.

};

CPP_END

#endif //LIBC_SYS_STAT_H
