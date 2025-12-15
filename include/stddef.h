/**
 * @file stddef.h
 * @brief Defines fundamental types and macros required by the C language.
 *
 * @see https://pubs.opengroup.org/onlinepubs/9699919799/basedefs/stddef.h.html
 *
 * @date 16 December 2025
 * @author Max Tyson
 */

#include <libc_common.h>

#ifndef LIBC_STDDEF_H
#define LIBC_STDDEF_H

CPP_START

#define NULL	((void*)0)	///< Null pointer constant.
#define offsetof(type, member) ((size_t)( (char *)&(((type *)0)->member) - (char *)0 )) ///< Offest in bytes of a member from the start of the struct

typedef __PTRDIFF_TYPE__	ptrdiff_t;
typedef __WCHAR_TYPE__		wchar_t;
typedef __SIZE_TYPE__		size_t;


CPP_END

#endif //LIBC_STDDEF_H