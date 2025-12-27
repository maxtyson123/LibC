/**
 * @file errno.h
 * @breif Defines the standard error codes that report why a call fails
 *
 * @date 14 December 2025
 * @author Max Tyson
 *
 * @todo Linux port / remove specifics
 */

#include <libc_common.h>

#ifndef LIBC_ERRNO_H
#define LIBC_ERRNO_H

CPP_START

extern int __errno;
extern int *__errno_location(void);
#define errno (*__errno_location())

#define EPERM       1       ///< Operation not permitted
#define ENOENT      2       ///< File/Dir doesnt exist
#define ESRCH       3       ///< Process doesnt exist
#define EINTR       4       ///< Syscall was interrupted
#define EIO         5       ///< Error in I/O operation
#define ENXIO       6       ///< Device or address doesnt exist
#define E2BIG       7       ///< Too many args passed
#define ENOEXEC     8       ///< File is not in a valid format
#define EBADF       9       ///< File descriptor was invalid or closed
#define ECHILD      10      ///< Child process doesnt exist
#define EAGAIN      11      ///< Resource temporary unavailable (try again)
#define ENOMEM      12      ///< Not enough memory to perform the requested operation
#define EACCES      13      ///< Permission denied
#define EFAULT      14      ///< Invalid memory address
#define ENOTBLK     15      ///< Was not passed a block device when this was required
#define EBUSY       16      ///< Requested resource is currently in used
#define EEXIST      17      ///< The resource requested to be created already exists
#define EXDEV       18      ///< Operation crosses multiple filesystems which is not allowed
#define ENODEV      19      ///< Device is not available
#define ENOTDIR     20      ///< Part of the path supplied is not a directory
#define EISDIR      21      ///< Cant perform this operation on a directory
#define EINVAL      22      ///< One of the passed arguments is invalid
#define ENFILE      23      ///< Too many files open on this OS
#define EMFILE      24      ///< Too many files open on this process
#define ENOTTY      25      ///< This operation can only be performed on a character device
#define ETXTBSY     26      ///< File is currently in use
#define EFBIG       27      ///< File is too big
#define ENOSPC      28      ///< Not enough space left on the requested device
#define ESPIPE      29      ///< Cant perform seek on this file
#define EROFS       30      ///< Non read only operation on a read only filesystem
#define EMLINK      31      ///< Too many hardlinks
#define EPIPE       32      ///< Cant write to an invalid or closed connection
#define EDOM        33      ///< Maths operation outside of domain
#define ERANGE      34      ///< Maths operation outside of range (over/underflow for type)
#define ENOMSG      35      ///< No message of the specified type availble
#define EIDRM       36      ///< IPC endpoint has been closed
// 37-44 Reserved for linux
#define EDEADLK     45      ///< Operation would cause a locking loop
#define ENOLCK      46      ///< No locks exist to complete the operation
// 47-40 Not used
// 50-57 Reserved for linux
// 58-59 Not used
#define ENOSTR      60      ///< Device doesnt support streams
#define ENODATA     61      ///< No data available for non blocking operation
#define ETIME       62      ///< Stream timed out
#define ENOSR       63      ///< Not enough resources for stream
// 64-66 Reserved for linux
#define ENOLINK     67      ///< Link doesnt exist anymore
// 68-70 Reserved for linux
#define EPROTO      71      ///< Peer/Client broke the rules of a protocol
// 72-74 Not used
// 75-76 Reserved for linux
#define EBADMSG     77      ///< Message is invalid or in the incorrect format
// 78-78 Not used
#define EFTYPE      79      ///< Wrong file type/format
// 80-87 Reserved for linux
#define ENOSYS      88      ///< Syscall doesnt exist
// 89-89 Reserved for cgwin
#define ENOTEMPTY   90      ///< The target directory still contains entries
#define ENAMETOOLONG 91     ///< Name exceeds the maximum
#define ELOOP       92      ///< Too many links encountered (resulting in a loop)
// 93-94 Not used
#define EOPNOTSUPP  95      ///< Operation not supported on this resource
#define EPFNOSUPPORT 96     ///< Protocol not supported on this system
// 97-103 Not used
#define ECONNRESET  104     ///< Connection unexpectedly terminated by remote
#define ENOBUFS     105     ///< No space in the buffer available
#define EAFNOSUPPORT 106    ///< Address not supported on this system
#define EPROTOTYPE  107     ///< Protocol type not supported on this socket
#define ENOTSOCK    108     ///< This operation can only be performed on a socket
#define ENOPROTOOPT 109     ///< Option not supported on this socket
// 110-110 Reserved for linux
#define ECONNREFUSED 111    ///< Attempt to connect was refused by peer
#define EADDRINUSE  112     ///< Address already in use
#define ECONNABORTED 113    ///< Connection terminated locally
#define ENETUNREACH 114     ///< No route exists to connect to the target network
#define ENETDOWN    115     ///< Target network is unavailable
#define ETIMEDOUT   116     ///< Operation took longer then allowed
#define EHOSTDOWN   117     ///< Target network's machine is unavailable
#define EHOSTUNREACH 118    ///< No route exists to connect to the target network's machine
#define EINPROGRESS 119     ///< Patience is a virtue
#define EALREADY    120     ///< Operation has already been started
#define EDESTADDRREQ 121    ///< No destination address was supplied
#define EMSGSIZE    122     ///< The message passed was too big
#define EPROTONOSUPPORT 123 ///< Protocol not supported on this system
// 124-124 Reserved for linux
#define EADDRNOTAVAIL 125   ///< Cannot use this address on this system
#define ENETRESET   126     ///< Connection terminated by a network level reset
#define EISCONN     127     ///< Socket is already connected
#define ENOTCONN    128     ///< Socket is not connected
#define ETOOMANYREFS 129    ///< Socket self references, causing a loop
// 130-131 Reserved for linux
#define EDQUOT      132     ///< User doesnt have enough space to perform operation
#define ESTALE      133     ///< Filesystem resource no longer valid
#define ENOTSUP     134     ///< Operation not supported on resource
// 135-135 Reserved for linux
// 136-137 Not used
#define EILSEQ      138     ///< Attempted to process character sequence that had illegal bytes
#define EOVERFLOW   139     ///< Value too large for type
#define ECANCELED   140     ///< Operation terminated
#define ENOTRECOVERABLE 141 ///< System state cannot be restored
#define EOWNERDEAD  142     ///< Owner of the resource exited

#define EWOULDBLOCK EAGAIN  ///< Operation cannot be performed immediately

#define RETURN_ERR(e) do { errno = (e); return -1; } while (0)

CPP_END

#endif //LIBC_ERRNO_H