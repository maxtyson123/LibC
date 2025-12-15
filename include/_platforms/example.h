/**
 * @file example.h
 * @breif Exampe definitions of functions that are specific to an platform that this libc is compiled for
 *
 * @date 14 December 2025
 * @author Max Tyson
 */

#include <libc_common.h>

#ifndef LIBC_PLATFORM_EXAMPLE_H
#define LIBC_PLATFORM_EXAMPLE_H

CPP_START

// Proccess
int _exit(int code);
int _execve(char *name, char **argv, char **env);
int _fork(void);
int _getpid(void);
int _kill(int pid, int sig);
int _times(struct tms *buf);
int _wait(int *status);

// File
int _close(int file);
int _fstat(int file, struct stat *st)
int _isatty(int file);
int _link(char *old, char *new);
int _lseek(int file, int ptr, int dir);
int _open(const char *name, int flags, int mode);
int _read(int file, char *ptr, int len);
int _stat(char *file, struct stat *st);
int _unlink(char *name);
int _write(int file, char *ptr, int len);

// Memory
caddr_t _sbrk(int incr);

// Environment variables
extern char *__env[1];
extern char **environ;

CPP_END

#endif //LIBC_PLATFORM_EXAMPLE_H