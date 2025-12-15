/**
 * @file time.h
 * @brief Defines the time types and functions.
 *
 * @see https://pubs.opengroup.org/onlinepubs/9699919799/basedefs/time.h.html
 *
 * @date 15 December 2025
 * @author Max Tyson
 */

#include <libc_common.h>
#include <sys/types.h>

#ifndef LIBC_TIME_H
#define LIBC_TIME_H

CPP_START

/**
 * @struct tm
 * @brief Defines a moment in time
 */
struct tm {

    int    tm_sec;      ///< Seconds 0-60
    int    tm_min;      ///< Minutes 0-59
    int    tm_hour;     ///< Hour 0-23
    int    tm_mday;     ///< Day of month 1-31
    int    tm_mon;      ///< Month of year 0-11
    int    tm_year;     ///< Years since 1900.
    int    tm_wday;     ///< Day of week 0-6 (Sunday = 0)
    int    tm_yday;     ///< Day of year 0-365
    int    tm_isdst;    ///< Daylight Savings flag (positive = true, 0 = false, negative = no info)

};

/**
 * @struct timespec
 * @brief Defines a precise moment in time
 */
struct timespec {

    time_t tv_sec;      ///< Whole seconds
    long   tv_nsec;     ///< Nanoseconds 0 - 999,999,999

};

/**
 * @struct itimerspec
 * @brief Defines when an interval timer should fire
 */
struct itimerspec {

    struct timespec it_interval;    ///< Reload value (period)
    struct timespec it_value;       ///< Initial expiration

};

#define CLOCKS_PER_SEC 1000000      ///< Used to convert clocks into seconds
#define CLOCK_MONOTONIC 1           ///< Identifies a clock measuring realtime and cannot be set
#define CLOCK_PROCESS_CPUTIME_ID 2  ///< Identifies a clock that represents the amount of time taken by this process
#define CLOCK_REALTIME 3            ///< Identifies a clock measuring realtime
#define CLOCK_THREAD_CPUTIME_ID 4   ///< Identifies a clock that represents the amount of time taken by this thread
#define TIMER_ABSTIME 1             ///< Flag to treat the time as an absolute timestamp and not a relative duration

extern int getdate_err;

char*       asctime(const struct tm*);
char*       asctime_r(const struct tm* restrict, char* restrict);

clock_t     clock(void);
int         clock_getcpuclockid(pid_t, clockid_t*);
int         clock_getres(clockid_t, struct timespec*);
int         clock_gettime(clockid_t, struct timespec*);
int         clock_nanosleep(clockid_t, int, const struct timespec*, struct timespec*);
int         clock_settime(clockid_t, const struct timespec*);

char*       ctime(const time_t*);
char*       ctime_r(const time_t*, char*);

double      difftime(time_t, time_t);
struct tm*  getdate(const char*);

struct tm*  gmtime(const time_t*);
struct tm*  gmtime_r(const time_t* restrict, struct tm* restrict);

struct tm*  localtime(const time_t*);
struct tm*  localtime_r(const time_t* restrict, struct tm* restrict);

time_t      mktime(struct tm*);
int         nanosleep(const struct timespec*, struct timespec*);

size_t      strftime(char* restrict, size_t, const char* restrict, const struct tm* restrict);
size_t      strftime_l(char* restrict, size_t, const char* restrict, const struct tm* restrict, locale_t);
char*       strptime(const char* restrict, const char *restrict,struct tm* restrict);

time_t      time(time_t*);
int         timer_create(clockid_t, struct sigevent* restrict,timer_t* restrict);
int         timer_delete(timer_t);
int         timer_getoverrun(timer_t);
int         timer_gettime(timer_t, struct itimerspec *);
int         timer_settime(timer_t, int, const struct itimerspec *restrict, struct itimerspec *restrict);

void        tzset(void);

CPP_END

#endif //LIBC_TIME_H