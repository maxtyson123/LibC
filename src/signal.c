/**
 * @file signal.c
 * @brief Defines functions to handle async events in a proc
 *
 * @date 16 December 2025
 * @author Max Tyson
*/

#include <signal.h>
#include <platform.h>
#include <errno.h>

/**
 * @brief Send a signal to a process
 *
 * @param pid The process (or process group if negative) to send the signal to
 * @param signal The signal to send
 * @return 0 on success, or -1 with an errno
 */
int kill(pid_t pid, int signal)
{

	// Send the kill signal (platform specific)
	return _platform_kill(pid,signal);
}

/**
 * @brief Send a signal to a process group
 *
 * @param pgid The process group to send the signal to
 * @param signal The signal to send
 * @return 0 on success, or -1 with an errno
 */
int killpg(pid_t pgid, int signal)
{

	// IDs must be positive as platform expects negatives to represent a group which fails under -(-pgid)
	if (pgid < 0) {
		errno = EINVAL;
		return -1;
	}

	// Send the kill signal and make it a group (platform specific)
	return kill(-pgid,signal);

}