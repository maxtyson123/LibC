/**
 * @file libc_platform_specifics.h
 * @breif Functions that are specific to the platform that this libc is compiled for
 *
 * @date 14 December 2025
 * @author Max Tyson
 */

#ifndef LIBC_PLATFORM_SPECIFICS_H
#define LIBC_PLATFORM_SPECIFICS_H

#ifdef PLATFORM_MAXOS
#include <_platforms/maxos.h>
#endif

#ifdef PLATFORM_MACOS
#include <_platforms/macos.h>
#endif

#ifdef PLATFORM_LINUX
#include <_platforms/linux.h>
#endif

#ifdef PLATFORM_WINDOWS
#include <_platforms/windows.h>
#endif

#endif //LIBC_PLATFORM_SPECIFICS_H