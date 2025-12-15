/**
 * @file stdint.h
 * @brief Defines sets of integer types having specified widths
 *
 * @see https://pubs.opengroup.org/onlinepubs/9699919799/basedefs/stdint.h.html
 *
 * @date 15 December 2025
 * @author Max Tyson
 */

#include <libc_common.h>

#ifndef LIBC_STDINT_H
#define LIBC_STDINT_H

CPP_START

// Signed 8bit
typedef signed char         int8_t;
typedef int8_t              int_least8_t;
typedef int                 int_fast8_t;
#define INT8_MIN            (-128)
#define INT8_MAX            127
#define INT_LEAST8_MIN      INT8_MIN
#define INT_LEAST8_MAX      INT8_MAX
#define INT_FAST8_MIN       INT32_MIN
#define INT_FAST8_MAX       INT32_MAX
#define INT8_C(c)  c

// Unsigned 8bit
typedef unsigned char       uint8_t;
typedef uint8_t             uint_least8_t;
typedef unsigned int        uint_fast8_t;
#define UINT8_MAX           255u
#define UINT_LEAST8_MAX     UINT8_MAX
#define UINT_FAST8_MAX      UINT32_MAX
#define UINT8_C(c)          c##u

// Signed 16bit
typedef short               int16_t;
typedef int16_t             int_least16_t;
typedef int                 int_fast16_t;
#define INT16_MIN           (-32768)
#define INT16_MAX           32767
#define INT_LEAST16_MIN     INT16_MIN
#define INT_LEAST16_MAX     INT16_MAX
#define INT_FAST16_MIN      INT32_MIN
#define INT_FAST16_MAX      INT32_MAX
#define INT16_C(c)          c

// Unsigned 16bit
typedef unsigned short      uint16_t;
typedef uint16_t            uint_least16_t;
typedef unsigned int        uint_fast16_t;
#define UINT16_MAX          65535u
#define UINT_LEAST16_MAX    UINT16_MAX
#define UINT_FAST16_MAX     UINT32_MAX
#define UINT16_C(c)         c##u

// Signed 32bit
typedef int                 int32_t;
typedef int32_t             int_least32_t;
typedef int                 int_fast32_t;
#define INT32_MIN           (-2147483647-1)
#define INT32_MAX           2147483647
#define INT_LEAST32_MIN     INT32_MIN
#define INT_LEAST32_MAX     INT32_MAX
#define INT_FAST32_MIN      INT32_MIN
#define INT_FAST32_MAX      INT32_MAX
#define INT32_C(c) c

// Unsigned 32bit
typedef unsigned int        uint32_t;
typedef uint32_t            uint_least32_t;
typedef unsigned int        uint_fast32_t;
#define UINT32_MAX          4294967295u
#define UINT_LEAST32_MAX    UINT32_MAX
#define UINT_FAST32_MAX     UINT32_MAX
#define UINT32_C(c)         c##u

// Signed 64bit
typedef long                int64_t;
typedef int64_t             int_least64_t;
typedef long                int_fast64_t;
#define INT64_MIN           (-9223372036854775807L-1)
#define INT64_MAX           9223372036854775807L
#define INT_LEAST64_MIN     INT64_MIN
#define INT_LEAST64_MAX     INT64_MAX
#define INT_FAST64_MIN      INT64_MIN
#define INT_FAST64_MAX      INT64_MAX
#define INT64_C(c)          c##L

// Unsigned 64bit
typedef unsigned long       uint64_t;
typedef uint64_t            uint_least64_t;
typedef unsigned long       uint_fast64_t;
#define UINT64_MAX          18446744073709551615UL
#define UINT_LEAST64_MAX    UINT64_MAX
#define UINT_FAST64_MAX     UINT64_MAX
#define UINT64_C(c)         c##UL

// Signed pointer
typedef long                intptr_t;
#define INTPTR_MIN          INT64_MIN
#define INTPTR_MAX          INT64_MAX

// Unsigned pointer
typedef unsigned long       uintptr_t;
#define UINTPTR_MAX         UINT64_MAX

// Signed max
typedef long                intmax_t;
#define INTMAX_MIN          INT64_MIN
#define INTMAX_MAX          INT64_MAX
#define INTMAX_C(c)         INT64_C(c)

// Signed min
typedef unsigned long       uintmax_t;
#define UINTMAX_MAX         UINT64_MAX
#define UINTMAX_C(c)        UINT64_C(c)

// Max
#ifndef SIZE_MAX
#define SIZE_MAX            ULONG_MAX
#endif

CPP_END

#endif //LIBC_STDINT_H