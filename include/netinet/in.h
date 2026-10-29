/**
 * @file in.h
 * @brief Internet address family
 *
 * @see https://pubs.opengroup.org/onlinepubs/9799919799/basedefs/netinet_in.h.html
 *
 * @date 29 October 2026
 * @author Max Tyson
 */

#include <libc_common.h>
#include <inttypes.h>
#include <sys/socket.h>

#ifndef LIBC_NETINET_IN_H
#define LIBC_NETINET_IN_H

CPP_START

/**
* @typedef in_port_t
* @brief Internet port number, stored in network byte order.
*/
typedef uint16_t in_port_t;

/**
 * @typedef in_addr_t
 * @brief IPv4 address, stored in network byte order.
 */
typedef uint32_t in_addr_t;

/**
 * @struct InternetAddress
 * @brief IPv4 Internet address
 *
 * @typedef in_addr
 * @brief Public alias for InternetAddress
 */
typedef struct InternetAddress {

    in_addr_t s_addr;   ///< IPv4 address

} in_addr;

/**
 * @struct sockaddr_in
 * @brief Socket address for the IPv4 Internet address family.
 */
struct sockaddr_in {

    sa_family_t sin_family;     ///< Address family
    in_port_t sin_port;         ///< Port number
    in_addr sin_addr;    ///< IP address

};

/**
 * @struct in6_addr
 * @brief IPv6 Internet address.
 */
struct in6_addr {

    uint8_t s6_addr[16];    ///< IPv6 address parts

};

/**
 * @struct sockaddr_in6
 * @brief Socket address for the IPv6 Internet address family.
 */
struct sockaddr_in6 {

    sa_family_t sin6_family;    ///< Address family
    in_port_t sin6_port;        ///< Port number
    uint32_t sin6_flowinfo;     ///< IPv6 traffic class and flow information
    struct in6_addr sin6_addr;  ///< IPv6 address
    uint32_t sin6_scope_id;     ///< Set of interfaces for a scope

};

/// The wildcard IPv6 address
const struct in6_addr in6addr_any;

/// The loopback IPv6 address
const struct in6_addr in6addr_loopback;

#define IN6ADDR_ANY_INIT {{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }}
#define IN6ADDR_LOOPBACK_INIT {{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 }}

/**
 * @struct ipv6_mreq
 * @brief IPv6 multicast group request.
 */
struct ipv6_mreq {
    struct in6_addr ipv6mr_multiaddr;
    unsigned ipv6mr_interface;
};

#define IPPROTO_IP       0          ///< Internet protocol
#define IPPROTO_IPV6     1          ///< Internet Protocol Version 6
#define IPPROTO_ICMP     2          ///< Control message protocol
#define IPPROTO_RAW      3          ///< Raw IP Packets Protocol
#define IPPROTO_TCP      4          ///< Transmission control protocol
#define IPPROTO_UDP      5          ///< User datagram protoco

#define INADDR_ANY       ((in_addr_t) 0x00000000U)  ///< IPv4 wildcard address
#define INADDR_BROADCAST ((in_addr_t) 0xffffffffU)  ///< IPv4 broadcast address

#define INET_ADDRSTRLEN  16     ///< Length of the string form for IP
#define INET6_ADDRSTRLEN 46     ///< Length of the string form for IPv6

#define IPV6_JOIN_GROUP       1  ///< Join a multicast group (@todo platform specidic)
#define IPV6_LEAVE_GROUP      2  ///< Quit a multicast group (@todo platform specidic)
#define IPV6_MULTICAST_HOPS   3  ///< Multicast hop limit (@todo platform specidic)
#define IPV6_MULTICAST_IF     4  ///< Interface to use for outgoing multicast packets (@todo platform specidic)
#define IPV6_MULTICAST_LOOP   5  ///< Multicast packets are delivered back to the local application (@todo platform specidic)
#define IPV6_UNICAST_HOPS     6  ///< Unicast hop limit (@todo platform specidic)
#define IPV6_V6ONLY           7  ///< Restrict AF_INET6 socket to IPv6 communications only (@todo platform specidic)

/// Test if first 4 bytes are 0
#define __LIBC_IN6_FIRST_4_ZERO(a) \
    ((a)->s6_addr[0] == 0 && (a)->s6_addr[1] == 0 && \
     (a)->s6_addr[2] == 0 && (a)->s6_addr[3] == 0)

/// Test if first 8 bytes are 0
#define __LIBC_IN6_FIRST_8_ZERO(a) \
    (__LIBC_IN6_FIRST_4_ZERO(a) && \
     (a)->s6_addr[4] == 0 && (a)->s6_addr[5] == 0 && \
     (a)->s6_addr[6] == 0 && (a)->s6_addr[7] == 0)

/// Test if first 10 bytes are 0
#define __LIBC_IN6_FIRST_10_ZERO(a) \
    (__LIBC_IN6_FIRST_8_ZERO(a) && \
     (a)->s6_addr[8] == 0 && (a)->s6_addr[9] == 0)

/// Test if first 12 bytes are 0
#define __LIBC_IN6_FIRST_12_ZERO(a) \
    (__LIBC_IN6_FIRST_10_ZERO(a) && \
     (a)->s6_addr[10] == 0 && (a)->s6_addr[11] == 0)

/// Test whether an IPv6 address is unspecified (::)
#define IN6_IS_ADDR_UNSPECIFIED(a) \
    (__LIBC_IN6_FIRST_8_ZERO(a) && \
     (a)->s6_addr[8] == 0 && (a)->s6_addr[9] == 0 && \
     (a)->s6_addr[10] == 0 && (a)->s6_addr[11] == 0 && \
     (a)->s6_addr[12] == 0 && (a)->s6_addr[13] == 0 && \
     (a)->s6_addr[14] == 0 && (a)->s6_addr[15] == 0)

/// Test whether an IPv6 address is loopback (::1)
#define IN6_IS_ADDR_LOOPBACK(a) \
    (__LIBC_IN6_FIRST_8_ZERO(a) && \
     (a)->s6_addr[8] == 0 && (a)->s6_addr[9] == 0 && \
     (a)->s6_addr[10] == 0 && (a)->s6_addr[11] == 0 && \
     (a)->s6_addr[12] == 0 && (a)->s6_addr[13] == 0 && \
     (a)->s6_addr[14] == 0 && (a)->s6_addr[15] == 1)

/// Test whether an IPv6 address is multicast
#define IN6_IS_ADDR_MULTICAST(a) \
    ((a)->s6_addr[0] == 0xff)

/// Test whether an IPv6 address is link-local unicast
#define IN6_IS_ADDR_LINKLOCAL(a) \
    ((a)->s6_addr[0] == 0xfe && \
     ((a)->s6_addr[1] & 0xc0) == 0x80)

/// Test whether an IPv6 address is site-local unicast
#define IN6_IS_ADDR_SITELOCAL(a) \
    ((a)->s6_addr[0] == 0xfe && \
     ((a)->s6_addr[1] & 0xc0) == 0xc0)

/// Test whether an IPv6 address is IPv4-mapped
#define IN6_IS_ADDR_V4MAPPED(a) \
    (__LIBC_IN6_FIRST_10_ZERO(a) && \
     (a)->s6_addr[10] == 0xff && \
     (a)->s6_addr[11] == 0xff)

/// Test whether an IPv6 address is IPv4-compatible
#define IN6_IS_ADDR_V4COMPAT(a) \
    (__LIBC_IN6_FIRST_12_ZERO(a) && \
     !((a)->s6_addr[12] == 0 && (a)->s6_addr[13] == 0 && \
       (a)->s6_addr[14] == 0 && (a)->s6_addr[15] == 0) && \
     !((a)->s6_addr[12] == 0 && (a)->s6_addr[13] == 0 && \
       (a)->s6_addr[14] == 0 && (a)->s6_addr[15] == 1))

/// Test whether an IPv6 address is node-local multicast
#define IN6_IS_ADDR_MC_NODELOCAL(a) \
    (IN6_IS_ADDR_MULTICAST(a) && \
     ((a)->s6_addr[1] & 0x0f) == 0x01)

/// Test whether an IPv6 address is link-local multicast
#define IN6_IS_ADDR_MC_LINKLOCAL(a) \
    (IN6_IS_ADDR_MULTICAST(a) && \
     ((a)->s6_addr[1] & 0x0f) == 0x02)

/// Test whether an IPv6 address is site-local multicast
#define IN6_IS_ADDR_MC_SITELOCAL(a) \
    (IN6_IS_ADDR_MULTICAST(a) && \
     ((a)->s6_addr[1] & 0x0f) == 0x05)

/// Test whether an IPv6 address is organization-local multicast
#define IN6_IS_ADDR_MC_ORGLOCAL(a) \
    (IN6_IS_ADDR_MULTICAST(a) && \
     ((a)->s6_addr[1] & 0x0f) == 0x08)

/// Test whether an IPv6 address is global multicast
#define IN6_IS_ADDR_MC_GLOBAL(a) \
    (IN6_IS_ADDR_MULTICAST(a) && \
     ((a)->s6_addr[1] & 0x0f) == 0x0e)

CPP_END

#endif //LIBC_NETINET_IN_H
