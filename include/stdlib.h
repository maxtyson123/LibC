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
// #include <fcntl.h>


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

// Function typedefs
typedef void	(*exit_func_t)(void);
typedef int		(*bs_func_t)(const void*, const void*);
typedef int		(*qsort_func_t)(const void*, const void*);
typedef int		(*qsort_r_func_t)(const void*, const void*, void*);

// Process termination
_Noreturn void		_Exit(int);
_Noreturn void		abort(void);
_Noreturn void		exit(int);
_Noreturn void		quick_exit(int);
int					atexit(exit_func_t);
int					at_quick_exit(exit_func_t);

// Memory mangement
void*				malloc(size_t);
void*				calloc(size_t, size_t);
void*				realloc(void*, size_t);
void*				reallocarray(void*, size_t, size_t);
void				free(void*);
void*				aligned_alloc(size_t, size_t);
int					posix_memalign(void**, size_t, size_t);

// Env variables
char*				getenv(const char*);
char*				secure_getenv(const char*);
int					setenv(const char*, const char*, int);
int					unsetenv(const char*);
int					putenv(char*);

// String to number
double				atof(const char*);
int					atoi(const char*);
long				atol(const char*);
long long			atoll(const char*);

long				strtol(const char* restrict, char** restrict, int);
unsigned long		strtoul(const char* restrict, char** restrict, int);
long long			strtoll(const char* restrict, char** restrict, int);
unsigned long long	strtoull(const char* restrict, char** restrict, int);

double				strtod(const char* restrict, char** restrict);
float				strtof(const char* restrict, char** restrict);
long double			strtold(const char* restrict, char** restrict);

// Abs value / Division
int					abs(int);
long				labs(long);
long long			llabs(long long);

div_t				div(int, int);
ldiv_t				ldiv(long, long);
lldiv_t				lldiv(long long, long long);

// Searching / Sorting
void*				bsearch(const void*, const void*, size_t, size_t, bs_func_t);
void				qsort(void*, size_t, size_t, qsort_func_t);
void				qsort_r(void*, size_t, size_t, qsort_r_func_t, void*);

// Random number generation
int					rand(void);
void				srand(unsigned);

long				random(void);
void				srandom(unsigned);

double				drand48(void);
long				lrand48(void);
long				mrand48(void);

double				erand48(unsigned short[3]);
long				jrand48(unsigned short[3]);
long				nrand48(unsigned short[3]);

void				srand48(long);
unsigned short*		seed48(unsigned short[3]);
void				lcong48(unsigned short[7]);

// Locale / Character conversion
int					mblen(const char*, size_t);
int					mbtowc(wchar_t* restrict, const char* restrict, size_t);
size_t				mbstowcs(wchar_t* restrict, const char* restrict, size_t);

int					wctomb(char*, wchar_t);
size_t				wcstombs(char* restrict, const wchar_t* restrict, size_t);

// Temp files / Terminals
char*				mkdtemp(char*);
int					mkstemp(char*);
int					mkostemp(char*, int);

int					grantpt(int);
int					posix_openpt(int);
int					unlockpt(int);
char*				ptsname(int);
int					ptsname_r(int, char*, size_t);

// Encoding
char*				initstate(unsigned, char*, size_t);
char*				setstate(char*);

long				a64l(const char*);
char*				l64a(long);

// Other
int					system(const char*);
int					getsubopt(char** restrict, char* const* restrict, char** restrict);
void				setkey(const char*);
char*				realpath(const char* restrict, char* restrict);

CPP_END

#endif //LIBC_STDLIB_H