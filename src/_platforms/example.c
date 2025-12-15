/**
 * @file example.h
 * @breif Exampe implementations of functions that are specific to an platform that this libc is compiled for
 *
 * @date 14 December 2025
 * @author Max Tyson
 *
 * @credit https://sourceware.org/newlib/libc.html
 */

#include <errno.h>
#include <_platforms/example.h>

/**
 * @brief Exit the current process without closing files.
 * @note Stub implementation: will spin forever
 *
 * @param code The outcome of the process (0 is success, fail otherwise)
 * @return Nothing, error code if failed to close
 */
int _exit(int code) {

    // Spin forever
    while (1)
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
int execve(char* name, char** argv, char** env) {
    errno = ENOMEM;
    return -1;
}

/**
 * @brief Create a copy of this process
 * @note Stub implementation: Will error - resource unavailable
 *
 * @return 0 for parent (current), new PID for child (the copy) or -1 on an error
 */
int fork(void) {
    errno = EAGAIN;
    return -1;
}

/**
 * @brief Close a file
 * @note Stub implementation: Return -1 but no errno
 *
 * @param file The file descriptor for the file requesting to be closed
 * @return
 */
int close(int file) {
    return -1;
}

/**
 * @brief Get the status of a file
 * @note Stub implementation:
 *
 * @param file The file descriptor for the file requesting the stats of
 * @param st The buffer to put the status information into
 * @return 0 for success or -1 on error
 */
int fstat(int file, struct stat* st) {
    st->st_mode = S_IFCHR;
    return 0;
}

char *__env[1] = { 0 };
char **environ = __env;