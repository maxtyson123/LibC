//
// Created by Max Tyson on 16/12/2025.
//

#ifndef LIBC_PLATFORM_H
#define LIBC_PLATFORM_H

#ifdef _PLATFORM_MAC_OS
	#include <_platforms/macos.h>
#elifdef _PLATFORM_MAX_OS
	#include <_platforms/maxos.h>
#else
	#include <_platforms/example.h>
#endif

#endif //LIBC_PLATFORM_PLATFORM_H