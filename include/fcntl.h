/**
 * @file fcntl.h
 * @brief Provides support for file control operations, opening and changing files
 *
 * @see https://pubs.opengroup.org/onlinepubs/9799919799/basedefs/fcntl.h.html
 *
 * @date 29 October 2026
 * @author Max Tyson
 */

#ifndef LIBC_FCNTL_H
#define LIBC_FCNTL_H

typedef struct _f_owner_ex
{
    int type;       ///< Discriminator for pid
    pid_t pid;      ///< Process ID or process group ID

} f_owner_ex;

typedef struct flock

#endif //LIBC_FCNTL_H
