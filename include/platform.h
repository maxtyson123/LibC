//
// Created by Max Tyson on 16/12/2025.
//

#ifndef LIBC_PLATFORM_H
#define LIBC_PLATFORM_H

#ifdef _PLATFORM_MacOS
	#include <_platforms/macos.h>
#endif


#ifdef _PLATFORM_MaxOS
	#include <_platforms/maxos.h>
#endif


#ifdef _PLATFORM_example
	#include <_platforms/example.h>
#endif

#endif //LIBC_PLATFORM_H