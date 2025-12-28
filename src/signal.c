/**
 * @file sig.c
 * @brief Defines functions to handle async events in a proc
 *
 * @date 16 December 2025
 * @author Max Tyson
*/

#include <signal.h>
#include <platform.h>
#include <errno.h>
// #include <unistd.h>

/**
 * @brief Send a sig to a process
 *
 * @param pid The process (or process group if negative) to send the sig to
 * @param sig The sig to send
 * @return 0 on success, or -1 with an errno
 */
int kill(pid_t pid, int sig)
{

	// Ensure a valid sig
	if(sig < 0 || sig >= _NSIG)
		RETURN_ERR(EINVAL);

	// Send the kill sig (platform specific)
	return _platform_kill(pid,sig);
}

/**
 * @brief Send a sig to a process group
 *
 * @param pgid The process group to send the sig to
 * @param sig The sig to send
 * @return 0 on success, or -1 with an errno
 */
int killpg(pid_t pgid, int sig)
{

	// IDs must be positive as platform expects negatives to represent a group which fails under -(-pgid)
	if (pgid < 0)
		RETURN_ERR(EINVAL);

	// Send the kill sig and make it a group (platform specific)
	return kill(-pgid,sig);

}

/**
 * @brief Send a sig to a thread
 *
 * @param thread The destination thread to send the sig to
 * @param sig The sig to send
 * @return 0 on success, or -1 with an errno
 */
int pthread_kill(pthread_t thread, int sig){

	// TODO: POSIX pthreads support
	return -1;

}

/**
 * @brief Send a sig to the executing process
 *
 * @return 0 on success, or -1 with an errno
 */
int raise(int sig){

	// Ensure a valid sig
	if(sig < 0 || sig >= _NSIG)
		RETURN_ERR(EINVAL);

	return kill(_platform_getpid(), sig);

}