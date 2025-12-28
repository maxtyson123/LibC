/**
 * @file libc_common.h
 * @brief Functions and macros that are used often throughout this implmentaion of LibC
 *
 * @date 14 December 2025
 * @author Max Tyson
 */

#ifndef LIBC_COMMON_H
#define LIBC_COMMON_H

#if defined(__cplusplus)
#define CPP_START extern "C" {
#define CPP_END   }
#else
#define CPP_START
#define CPP_END
#endif

#endif //LIBC_COMMON_H