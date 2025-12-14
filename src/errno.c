/**
 * @file errno.c
 * @breif Implements where the error codes are stored
 *
 * @date 14 December 2025
 * @author Max Tyson
 */

#include <errno.h>

// Define the storage for errno
int __errno = 0;
static int __errno_storage;

int* __errno_location(void) {
 return &__errno_storage;
}