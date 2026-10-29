/**
 * @file socket.h
 * @brief Provides networking sockets
 *
 * @see https://pubs.opengroup.org/onlinepubs/9799919799/basedefs/sys_socket.h.html
 *
 * @date 29 October 2026
 * @author Max Tyson
 */

#include <libc_common.h>
#include <stdint.h>
#include <sys/types.h>

#ifndef LIBC_SYS_SOCKET_H
#define LIBC_SYS_SOCKET_H

CPP_START

/**
 * @typedef socklen_t
 * @breif The length of a socket address struct
 */
typedef int_least32_t socklen_t;

/**
 * @typedef sa_family_t
 * @brief Represents a sockets address or protocol family
 */
typedef unsigned int sa_family_t;

/**
 * @struct SocketAddress
 * @brief Defines the socket address which is used in the bind(), connect(), getpeername(), getsockname(), recvfrom(), and sendto() functions
 *
 * @typedef sockaddr
 * @brief Public alias for SocketAddress
 */
typedef struct SocketAddress {

    sa_family_t  sa_family;     ///< Address family
    char sa_data[];             ///< Socket address (variable-length data)

} sockaddr;

/*
 * Generic socket address storage.
 *
 * TODO: Adjust _SS_MAXSIZE if any supported address structure requires
 *       more storage. Confirm alignment against the target ABI.
 */
#define _SS_MAXSIZE   128
#define _SS_ALIGNSIZE (sizeof(max_align_t))
#define _SS_PAD1SIZE  (_SS_ALIGNSIZE - sizeof(sa_family_t))
#define _SS_PAD2SIZE  (_SS_MAXSIZE - (sizeof(sa_family_t) + _SS_PAD1SIZE + _SS_ALIGNSIZE))

/**
 * @struct SocketAddressStorage
 * @brief Generic socket address storage
 *
 * @typedef sockaddr_storage
 * @brief Public alias for SocketAddressStorage
 */
typedef struct SocketAddressStorage {

    sa_family_t ss_family;
    unsigned char _ss_pad1[_SS_PAD1SIZE];
    max_align_t _ss_align;
    unsigned char _ss_pad2[_SS_PAD2SIZE];

} sockaddr_storage;

/**
 * @struct MessageHeader
 * @brief Message header for sendmsg() and recvmsg().
 *
 * @typedef msghdr
 * @brief Public alias for MessageHeader
 */
typedef struct MessageHeader {

    void* msg_name;                 ///< Optional address
    socklen_t msg_namelen;          ///< Size of address
    struct iovec* msg_iov;          ///< Scatter/gather array
    int msg_iovlen;                 ///< Members in msg_iov
    void* msg_control;              ///< Ancillary data
    socklen_t msg_controllen;       ///< Ancillary data buffer len
    int msg_flags;                  ///< Flags on received message

} msghdr;

/**
 * @struct AncillaryMessageHeader
 * @brief Header for ancillary message data
 *
 * @typedef cmsghdr
 * @brief Public alias for AncillaryMessageHeader
 */
typedef struct AncillaryMessageHeader {

    socklen_t cmsg_len;     ///< Data byte count, including the cmsghdr
    int cmsg_level;         ///< Originating protocol
    int cmsg_type;          ///< Protocol-specific type

} cmsghdr;

/// Indicates that the data array contains the access rights to be sent or received
#define SCM_RIGHTS      1

/// Align a length to the CMSG spec
#define CMSG_ALIGN(length) (((length) + sizeof(size_t) - 1) & ~(sizeof(size_t) - 1))

/// Pointer to the data array associated with the cmsghdr structure
#define CMSG_DATA(cmsg) ((unsigned char *)(cmsg) + CMSG_ALIGN(sizeof(struct cmsghdr)))

/// Get the next header of a cmsg
#define CMSG_NXTHDR(mhdr, cmsg) \
    ((cmsg) == NULL \
        ? CMSG_FIRSTHDR(mhdr) \
        : ((mhdr)->msg_control == NULL || \
           (cmsg)->cmsg_len < CMSG_LEN(0) || \
           (unsigned char *)(cmsg) + \
               CMSG_ALIGN((cmsg)->cmsg_len) + \
               CMSG_ALIGN(sizeof(struct cmsghdr)) > \
               (unsigned char *)(mhdr)->msg_control + \
               (mhdr)->msg_controllen \
            ? (struct cmsghdr *)0 \
            : (struct cmsghdr *)((unsigned char *)(cmsg) + \
                                 CMSG_ALIGN((cmsg)->cmsg_len)))

/// The first cmsg header from a message
#define CMSG_FIRSTHDR(mhdr) \
    (((mhdr)->msg_control != NULL && \
      (mhdr)->msg_controllen >= sizeof(struct cmsghdr)) \
        ? (struct cmsghdr *)(mhdr)->msg_control \
        : (struct cmsghdr *)0)

/// The space required by an ancillary data object of the specified length and its cmsghdr structure (aligned)
#define CMSG_SPACE(length) (CMSG_ALIGN(sizeof(struct cmsghdr)) + CMSG_ALIGN(length))

/// The value to store in cmsg_len
#define CMSG_LEN(length) (CMSG_ALIGN(sizeof(struct cmsghdr)) + (length))

/**
 * @struct linger
 * @brief Controls whether a socket lingers when closed
 *
 * @typedef linger
 * @brief Public alias for Linger
 */
typedef struct Linger {

    int l_onoff;
    int l_linger;

} linger;

#define SOCK_DGRAM      0   ///< Datagram socket
#define SOCK_RAW        1   ///< Raw Protocol Interface
#define SOCK_SEQPACKET  2   ///< Sequenced-packet socket
#define SOCK_STREAM     3   ///< Byte-stream socket

#define SOCK_NONBLOCK   0  ///< Create a socket file descriptor with the O_NONBLOCK flag atomically set on the new open file description
#define SOCK_CLOEXEC    1  ///< Create a socket file descriptor with the FD_CLOEXEC flag atomically set on that file descriptor
#define SOCK_CLOFORK    2  ///< Create a socket file descriptor with the FD_CLOFORK flag atomically set on that file descriptor

#define SOL_SOCKET      1   ///< Options are to be accessed at socket level, not protocol level

#define SO_ACCEPTCONN   1   ///< Socket is accepting connections
#define SO_BROADCAST    2   ///< Transmission of broadcast messages is supported
#define SO_DEBUG        3   ///< Debugging information is being recorded
#define SO_DOMAIN       4   ///< Socket domain
#define SO_DONTROUTE    5   ///< Bypass normal routing
#define SO_ERROR        6   ///< Socket error status
#define SO_KEEPALIVE    7   ///< Connections are kept alive with periodic messages
#define SO_LINGER       8   ///< Socket lingers on close
#define SO_OOBINLINE    9   ///< Out-of-band data is transmitted in line
#define SO_PROTOCOL     10  ///< Socket protocol
#define SO_RCVBUF       11  ///< Receive buffer size
#define SO_RCVLOWAT     12  ///< Receive "low water mark"
#define SO_RCVTIMEO     13  ///< Receive timeout
#define SO_REUSEADDR    14  ///< Reuse of local addresses is supported
#define SO_SNDBUF       15  ///< Send buffer size
#define SO_SNDLOWAT     16  ///< Send "low water mark"
#define SO_SNDTIMEO     17  ///< Send timeout
#define SO_TYPE         18  ///< Socket type

/// The maximum backlog queue length
#define SOMAXCONN       128

#define MSG_CMSG_CLOEXEC    0   ///< Atomically set the FD_CLOEXEC flag on any file descriptors created via SCM_RIGHTS during recvmsg()
#define MSG_CMSG_CLOFORK    1   ///< Atomically set the FD_CLOFORK flag on any file descriptors created via SCM_RIGHTS during recvmsg()
#define MSG_CTRUNC          2   ///< Control data truncated
#define MSG_DONTROUTE       3   ///< Send without using routing tables
#define MSG_EOR             4   ///< Terminates a record (if supported by the protocol)
#define MSG_OOB             5   ///< Out-of-band data
#define MSG_NOSIGNAL        6   ///< No SIGPIPE generated when an attempt to send is made on a stream-oriented socket that is no longer connected.
#define MSG_PEEK            7   ///< Leave received data in queue
#define MSG_TRUNC           8   ///< Normal data truncated
#define MSG_WAITALL         9   ///< Attempt to fill the read buffer

#define AF_UNSPEC       0   ///< Unspecified
#define AF_INET         1   ///< Internet domain sockets for use with IPv4 addresses
#define AF_INET6        2   ///< Internet domain sockets for use with IPv6 addresses
#define AF_UNIX         3   ///< UNIX domain sockets

#define SHUT_RD         0   ///< Disables further receive operations
#define SHUT_RDWR       1   ///< Disables further send and receive operations
#define SHUT_WR         2   ///< Disables further send operations

int     accept(int, struct sockaddr* restrict, socklen_t* restrict);
int     accept4(int, struct sockaddr* restrict, socklen_t* restrict, int);
int     bind(int, const struct sockaddr* , socklen_t);
int     connect(int, const struct sockaddr* , socklen_t);
int     getpeername(int, struct sockaddr* restrict, socklen_t* restrict);
int     getsockname(int, struct sockaddr* restrict, socklen_t* restrict);
int     getsockopt(int, int, int, void* restrict, socklen_t* restrict);
int     listen(int, int);
ssize_t recv(int, void* , size_t, int);
ssize_t recvfrom(int, void* restrict, size_t, int, struct sockaddr* restrict, socklen_t* restrict);
ssize_t recvmsg(int, struct msghdr* , int);
ssize_t send(int, const void* , size_t, int);
ssize_t sendmsg(int, const struct msghdr* , int);
ssize_t sendto(int, const void* , size_t, int, const struct sockaddr* , socklen_t);
int     setsockopt(int, int, int, const void* , socklen_t);
int     shutdown(int, int);
int     sockatmark(int);
int     socket(int, int, int);
int     socketpair(int, int, int, int [2]);

CPP_END

#endif //LIBC_SYS_SOCKET_H
