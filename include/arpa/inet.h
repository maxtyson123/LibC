/**
* @file inet.h
 * @brief Definitions for internet operations
 *
 * @see https://pubs.opengroup.org/onlinepubs/9799919799/basedefs/arpa_inet.h.html
 *
 * @date 29 October 2026
 * @author Max Tyson
 */

#include <libc_common.h>
#include <netinet/in.h>
#include <sys/socket.h>
#include <inttypes.h>

#ifndef LIBC_ARPA_INET_H
#define LIBC_ARPA_INET_H

CPP_START

uint32_t htonl(uint32_t);
uint16_t htons(uint16_t);
uint32_t ntohl(uint32_t);
uint16_t ntohs(uint16_t);

in_addr_t    inet_addr(const char *);
char*        inet_ntoa(struct in_addr);
const char*  inet_ntop(int, const void *restrict, char *restrict, socklen_t);
int          inet_pton(int, const char *restrict, void *restrict);

CPP_END

#endif //LIBC_ARPA_INET_H
