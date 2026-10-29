/**
 * @file stdarg.h
 * @brief Handle variable argument lists
 *
 * @see https://pubs.opengroup.org/onlinepubs/9799919799/basedefs/stdarg.h.html
 *
 * @date 29 October 2026
 * @author Max Tyson
 */

#include <libc_common.h>

#ifndef LIBC_STDARG_H
#define LIBC_STDARG_H

CPP_START

/**
 * @typedef va_list
 * @brief Type used to traverse a variable argument list
 */
typedef __builtin_va_list va_list;

#define va_start(ap, argN) __builtin_va_start(ap, argN)
#define va_arg(ap, type)   __builtin_va_arg(ap, type)
#define va_copy(dest, src) __builtin_va_copy(dest, src)
#define va_end(ap)         __builtin_va_end(ap)

CPP_END

#endif //LIBC_STDARG_H
