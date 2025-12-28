/**
 * @file example.h
 * @brief Example definitions of functions that are specific to an platform that this libc is compiled for
 *
 * @date 14 December 2025
 * @author Max Tyson
 */

#include <libc_common.h>

#ifndef LIBC_PLATFORM_EXAMPLE_H
#define LIBC_PLATFORM_EXAMPLE_H

CPP_START

// Forward defs
struct stat;
struct tms;

// Proccess
int _platform_exit(int code);
int _platform_execve(char* name, char** argv, char** env);
int _platform_fork(void);
int _platform_getpid(void);
int _platform_kill(int pid, int sig);
int _platform_times(struct tms* buf);
int _platform_wait(int* status);

// File
int _platform_close(int file);
int _platform_fstat(int file, struct stat* st);
int _platform_isatty(int file);
int _platform_link(char* old, char* new);
int _platform_lseek(int file, int ptr, int dir);
int _platform_open(const char* name, int flags, int mode);
int _platform_read(int file, char* ptr, int len);
int _platform_stat(char* file, struct stat* st);
int _platform_unlink(char* name);
int _platform_write(int file, char* ptr, int len);

// Memory
void* _platform_sbrk(int incr);

// Environment variables
extern char* __env[1];		///< Platform specific storage for the environment variables
extern char** environ;		///< Environment pointer @todo this isnt platform specific

// CPU state for signals
struct _platform_mcontext {
	//...
};

/**
 * @struct _struct_platform_locale
 * @brief Platform specific implementation for storing locale information
 *
 * @typedef _platform_locale
 * @brief Alais for _struct_platform_locale
 */
typedef struct _struct_platform_locale {

	const char* collate;
	const char* ctype;
	const char* messages;
	const char* monetary;
	const char* numeric;
	const char* time;

} _platform_locale;

CPP_END

#endif //LIBC_PLATFORM_EXAMPLE_H