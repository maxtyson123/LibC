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
typedef __INT8_TYPE__       int8_t;
typedef int8_t              int_least8_t;
typedef __INT_FAST8_TYPE__  int_fast8_t;
#define INT8_MAX            __INT8_MAX__
#define INT8_MIN            (-INT8_MAX - 1)
#define INT_LEAST8_MAX      INT8_MAX
#define INT_LEAST8_MIN      INT8_MIN
#define INT_FAST8_MAX       __INT_FAST8_MAX__
#define INT_FAST8_MIN       (-INT_FAST8_MAX - 1)
#define INT8_C(c)           __INT8_C(c)

// Unsigned 8bit
typedef __UINT8_TYPE__      uint8_t;
typedef uint8_t             uint_least8_t;
typedef __UINT_FAST8_TYPE__ uint_fast8_t;
#define UINT8_MAX           __UINT8_MAX__
#define UINT_LEAST8_MAX     UINT8_MAX
#define UINT_FAST8_MAX      __UINT_FAST8_MAX__
#define UINT8_C(c)          __UINT8_C(c)

// Signed 16bit
typedef __INT16_TYPE__      int16_t;
typedef int16_t             int_least16_t;
typedef __INT_FAST16_TYPE__ int_fast16_t;
#define INT16_MAX           __INT16_MAX__
#define INT16_MIN           (-INT16_MAX - 1)
#define INT_LEAST16_MAX     INT16_MAX
#define INT_LEAST16_MIN     INT16_MIN
#define INT_FAST16_MAX      __INT_FAST16_MAX__
#define INT_FAST16_MIN      (-INT_FAST16_MAX - 1)
#define INT16_C(c)          __INT16_C(c)

// Unsigned 16bit
typedef __UINT16_TYPE__         uint16_t;
typedef uint16_t                uint_least16_t;
typedef __UINT_FAST16_TYPE__    uint_fast16_t;
#define UINT16_MAX              __UINT16_MAX__
#define UINT_LEAST16_MAX        UINT16_MAX
#define UINT_FAST16_MAX         __UINT_FAST16_MAX__
#define UINT16_C(c)             __UINT16_C(c)

// Signed 32bit
typedef __INT32_TYPE__       int32_t;
typedef int32_t              int_least32_t;
typedef __INT_FAST32_TYPE__  int_fast32_t;
#define INT32_MAX           __INT32_MAX__
#define INT32_MIN           (-INT32_MAX - 1)
#define INT_LEAST32_MAX     INT32_MAX
#define INT_LEAST32_MIN     INT32_MIN
#define INT_FAST32_MAX      __INT_FAST32_MAX__
#define INT_FAST32_MIN      (-INT_FAST32_MAX - 1)
#define INT32_C(c)          __INT32_C(c)

// Unsigned 32bit
typedef __UINT32_TYPE__      uint32_t;
typedef uint32_t             uint_least32_t;
typedef __UINT_FAST32_TYPE__ uint_fast32_t;
#define UINT32_MAX          __UINT32_MAX__
#define UINT_LEAST32_MAX    UINT32_MAX
#define UINT_FAST32_MAX     __UINT_FAST32_MAX__
#define UINT32_C(c)         __UINT32_C(c)

// Signed 64bit
typedef __INT64_TYPE__       int64_t;
typedef int64_t              int_least64_t;
typedef __INT_FAST64_TYPE__  int_fast64_t;
#define INT64_MAX           __INT64_MAX__
#define INT64_MIN           (-INT64_MAX - 1)
#define INT_LEAST64_MAX     INT64_MAX
#define INT_LEAST64_MIN     INT64_MIN
#define INT_FAST64_MAX      __INT_FAST64_MAX__
#define INT_FAST64_MIN      (-INT_FAST64_MAX - 1)
#define INT64_C(c)          __INT64_C(c)

// Unsigned 64bit
typedef __UINT64_TYPE__      uint64_t;
typedef uint64_t             uint_least64_t;
typedef __UINT_FAST64_TYPE__ uint_fast64_t;
#define UINT64_MAX          __UINT64_MAX__
#define UINT_LEAST64_MAX    UINT64_MAX
#define UINT_FAST64_MAX     __UINT_FAST64_MAX__
#define UINT64_C(c)         __UINT64_C(c)

// Signed pointer
typedef __INTPTR_TYPE__      intptr_t;
#define INTPTR_MAX          __INTPTR_MAX__
#define INTPTR_MIN          (-INTPTR_MAX - 1)

// Unsigned pointer
typedef __UINTPTR_TYPE__     uintptr_t;
#define UINTPTR_MAX         __UINTPTR_MAX__

// Signed max
typedef __INTMAX_TYPE__      intmax_t;
#define INTMAX_MAX          __INTMAX_MAX__
#define INTMAX_MIN          (-INTMAX_MAX - 1)
#define INTMAX_C(c)         __INTMAX_C(c)

// Unsigned max
typedef __UINTMAX_TYPE__     uintmax_t;
#define UINTMAX_MAX         __UINTMAX_MAX__
#define UINTMAX_C(c)        __UINTMAX_C(c)

// Max
#ifndef SIZE_MAX
#define SIZE_MAX            __SIZE_MAX__
#endif

CPP_END

#endif //LIBC_STDINT_H
