/**
 * @file example.c
 * @brief Example implementations of functions that are specific to an platform that this libc is compiled for
 *
 * @date 14 December 2025
 * @author Max Tyson
 *
 * @credit https://sourceware.org/newlib/libc.html
 */

#include <errno.h>
#include <sys/stat.h>
#include <_platforms/example.h>

/**
 * @brief Exit the current process without closing files.
 * @note Stub implementation: will spin forever
 *
 * @param code The outcome of the process (0 is success, fail otherwise)
 * @return Nothing, error code if failed to close
 */
int _platform_exit(int code) {

	// Spin forever
	while(1)
		asm("nop");

}

/**
 * @brief Transfer execution to another process
 * @note Stub implementation: Will error - no memory
 *
 * @param name The executable to transfer to
 * @param argv The list of args to pass to the new process
 * @param env The environment variables to pass to the new process
 * @return Won't return on success otherwise -1 on error
 */
int _platform_execve(char* name, char** argv, char** env) {
	errno = ENOMEM;
	return -1;
}

/**
 * @brief Create a copy of this process
 * @note Stub implementation: Will error - resource unavailable
 *
 * @return 0 for parent (current), new PID for child (the copy) or -1 on an error
 */
int _platform_fork(void) {
	errno = EAGAIN;
	return -1;
}

/**
 * @brief Get the ID of the executing process
 * @note Stub implementation: Always return 1
 *
 * @return The ID
 */
int _platform_getpid(void) {

	return 1;
}

/**
 * @brief Send a signal to a process
 * @note Stub implementation: Always return error invalid argument
 *
 * @param pid The process ID to send the signal to
 * @param sig The signal to send
 * @return 0 for success or -1 on error
 */
int _platform_kill(int pid, int sig) {
	errno = EINVAL;
	return -1;
}

/**
 * @brief Get process times
 * @note Stub implementation: Always return error invalid argument
 *
 * @param buf The buffer to put the times into
 * @return The clock ticks or -1 on error
 */
int _platform_times(struct tms* buf) {
	errno = EINVAL;
	return -1;
}

/**
 * @brief Wait for a child process to change state
 * @note Stub implementation: Always return error no child processes
 *
 * @param status The buffer to put the status into
 * @return The PID of the child that changed state or -1 on error
 */
int _platform_wait(int* status) {
	errno = ECHILD;
	return -1;
}

/**
 * @brief Close a file
 * @note Stub implementation: Return -1 but no errno
 *
 * @param file The file descriptor for the file requesting to be closed
 * @return
 */
int _platform_close(int file) {
	return -1;
}

/**
 * @brief Get the status of a file
 * @note Stub implementation: Always return character device
 *
 * @param file The file descriptor for the file requesting the stats of
 * @param st The buffer to put the status information into
 * @return 0 for success or -1 on error
 */
int _platform_fstat(int file, struct stat* st) {
	st->st_mode = S_IFCHR;
	return 0;
}

/**
 * @brief Determine if a file descriptor is a terminal
 * @note Stub implementation: Always return true
 *
 * @param file The file descriptor to check
 * @return 1 if it is a terminal, 0 otherwise
 */
int _platform_isatty(int file) {
	return 1;
}

/**
 * @brief Create a new link (hard link) to an existing file
 * @note Stub implementation: Always return error too many links
 *
 * @param old The existing file
 * @param new The new link to create
 * @return 0 for success or -1 on error
 */
int _platform_link(char* old, char* new) {
	errno = EMLINK;
	return -1;
}

/**
 * @brief Reposition the read/write file offset
 * @note Stub implementation: Seeks to start of file always
 *
 * @param file The file descriptor to reposition
 * @param ptr Where to reposition to
 * @param dir How to reposition (SEEK_SET, SEEK_CUR, SEEK_END)
 * @return The new offset or -1 on error
 */
int _platform_lseek(int file, int ptr, int dir) {
	return 0;
}

/**
 * @brief Open a file
 * @note Stub implementation: Always return error no such file or directory
 *
 * @param name The name of the file to open
 * @param flags The flags for opening the file
 * @param mode The mode to open the file with
 * @return The file descriptor or -1 on error
 */
int _platform_open(const char* name, int flags, int mode) {

	errno = ENOENT;
	return -1;
}

/**
 * @brief Read from a file
 * @note Stub implementation: Always return 0 bytes read (EOF)
 *
 * @param file The file descriptor to read from
 * @param ptr The buffer to read into
 * @param len The number of bytes to read
 * @return The number of bytes read or -1 on error
 */
int _platform_read(int file, char* ptr, int len) {
	return 0;
}

/**
 * @brief Get the status of a file by name
 * @note Stub implementation: Always return character device
 *
 * @param file The name of the file requesting the stats of
 * @param st The buffer to put the status information into
 * @return 0 for success or -1 on error
 */
int _platform_stat(char* file, struct stat* st) {

	st->st_mode = S_IFCHR;
	return 0;

}

/**
 * @brief Remove a file
 * @note Stub implementation: Always return error no such file or directory
 *
 * @param name The name of the file to remove
 * @return 0 for success or -1 on error
 */
int _platform_unlink(char* name) {

	errno = ENOENT;
	return -1;

}

/**
 * @brief Write to a file
 * @note Stub implementation: Always return len (all bytes written)
 *
 * @param file The file descriptor to write to
 * @param ptr The buffer to write from
 * @param len The number of bytes to write
 * @return The number of bytes written or -1 on error
 */
int _platform_write(int file, char* ptr, int len) {
	return len;
}

/**
 * @brief Increment the program's data space
 * @note Stub implementation: Returns -1 (no memory)
 *
 * @param incr The amount to increase the data space by
 * @return The previous end of data space or -1 on error
 */
void* _platform_sbrk(int incr) {

	errno = ENOMEM;
	return (void*)-1;

}

char* __env[1] = { 0 };
char** environ = __env;