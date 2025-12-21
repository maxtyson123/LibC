/**
 * @file stdlib.h
 * @brief Defines fundamental functions that arent related to I/O, strings or maths.
 *
 * @see https://pubs.opengroup.org/onlinepubs/9699919799/basedefs/stdlib.h.html
 *
 * @date 16 December 2025
 * @author Max Tyson
 */

#include <libc_common.h>
#include <stddef.h>
#include <sys/wait.h>

#ifndef LIBC_STDLIB_H
#define LIBC_STDLIB_H

CPP_START

#define EXIT_FAILURE    1   ///< Unsuccessful termination for exit()
#define EXIT_SUCCESS    0   ///< Successful termination for exit()

#define RAND_MAX    0xFFFFFFFF        ///< Maximum value returned by rand()
#define MB_CUR_MAX  (__mb_cur_max())  ///< Maximum number of bytes in a character for the current locale
size_t __mb_cur_max(void);

/**
 * @struct _div
 * @brief Internal representation for the result of a div() call
 *
 * @typedef div_t
 * @brief Public alais for _div
 */
typedef struct _div
{
	int		quot;	///< Qutionant
	int		rem;	///< Remainder
} div_t;

/**
 * @struct _ldiv
 * @brief Internal representation for the result of a ldiv() call
 *
 * @typedef ldiv_t
 * @brief Public alais for _ldiv
 */
typedef struct _ldiv
{
	long	quot;	///< Quotient
	long	rem;	///< Remainder
} ldiv_t;

/**
 * @struct _lldiv
 * @brief Internal representation for the result of a lldiv() call
 *
 * @typedef lldiv_t
 * @brief Public alais for _lldiv
 */
typedef struct _lldiv
{
	long long	quot;	///< Quotient
	long long	rem;	///< Remainder
} lldiv_t;


CPP_END

#endif //LIBC_STDLIB_H