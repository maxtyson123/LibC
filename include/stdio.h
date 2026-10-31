/**
 * @file fcntl.h
 * @brief Standard input and output
 *
 * @see https://pubs.opengroup.org/onlinepubs/9799919799/basedefs/stdio.h.html
 *
 * @date 29 October 2026
 * @author Max Tyson
 */

#include <libc_common.h>
#include <sys/types.h>
#include <stddef.h>
#include <stdarg.h>


#ifndef LIBC_STDIO_H
#define LIBC_STDIO_H

CPP_START

/**
 * @typedef FILE
 * @brief Representation of an open input/output stream
 */
typedef struct __stdio_file FILE;

/**
 * @typedef fpos_t
 * @brief Stores a file position
 */
typedef long fpos_t;

#define BUFSIZ      8192    ///< Size of <stdio.h> buffers (@todo platform specidic)
#define L_ctermid   32      ///< Maximum terminal-name buffer length.
#define L_tmpnam    32      ///< Maximum temporary-name buffer length

#define _IOFBF      0       ///< Input/output fully buffered
#define _IOLBF      1       ///< Input/output line buffered
#define _IONBF      2       ///< Input/output unbuffered

#define SEEK_SET    0       ///< Seek relative to current position
#define SEEK_CUR    1       ///< Seek relative to end-of-file
#define SEEK_END    2       ///< Seek relative to start-of-file

#define FILENAME_MAX    4096    ///< Maximum size (in bytes) of the longest pathname that can be opened (@todo platform specidic)
#define FOPEN_MAX       16      ///< Number of streams which can be open simultaneously (@todo platform specidic)
#define TMP_MAX         25      ///< Minimum number of unique temporary filenames (@todo platform specidic)

#define EOF (-1) ///< End-of-file return value

/// Standard error output stream
extern FILE *stderr;

/// Standard input output stream
extern FILE *stdin;

/// Standard output output stream
extern FILE *stdout;

void     clearerr(FILE*);
char*    ctermid(char*);
int      dprintf(int, const char* restrict, ...);
int      fclose(FILE*);
FILE*    fdopen(int, const char*);
int      feof(FILE*);
int      ferror(FILE*);
int      fflush(FILE*);
int      fgetc(FILE*);
int      fgetpos(FILE* restrict, fpos_t* restrict);
char*    fgets(char* restrict, int, FILE* restrict);
int      fileno(FILE*);
void     flockfile(FILE*);
FILE*    fmemopen(void* restrict, size_t, const char* restrict);
FILE*    fopen(const char* restrict, const char* restrict);
int      fprintf(FILE* restrict, const char* restrict, ...);
int      fputc(int, FILE*);
int      fputs(const char* restrict, FILE* restrict);
size_t   fread(void* restrict, size_t, size_t, FILE* restrict);
FILE*    freopen(const char* restrict, const char* restrict, FILE* restrict);
int      fscanf(FILE* restrict, const char* restrict, ...);
int      fseek(FILE* , long, int);
int      fseeko(FILE* , off_t, int);
int      fsetpos(FILE* , const fpos_t*);
long     ftell(FILE*);
off_t    ftello(FILE*);
int      ftrylockfile(FILE*);
void     funlockfile(FILE*);
size_t   fwrite(const void* restrict, size_t, size_t, FILE* restrict);
int      getc(FILE*);
int      getchar(void);
int      getc_unlocked(FILE*);
int      getchar_unlocked(void);
ssize_t  getdelim(char* *restrict, size_t* restrict, int, FILE* restrict);
ssize_t  getline(char* *restrict, size_t* restrict, FILE* restrict);
FILE*    open_memstream(char* *, size_t*);
int      pclose(FILE*);
void     perror(const char*);
FILE*    popen(const char* , const char*);
int      printf(const char* restrict, ...);
int      putc(int, FILE*);
int      putchar(int);
int      putc_unlocked(int, FILE*);
int      putchar_unlocked(int);
int      puts(const char*);
int      remove(const char*);
int      rename(const char* , const char*);
int      renameat(int, const char* , int, const char*);
void     rewind(FILE*);
int      scanf(const char* restrict, ...);
void     setbuf(FILE* restrict, char* restrict);
int      setvbuf(FILE* restrict, char* restrict, int, size_t);
int      snprintf(char* restrict, size_t, const char* restrict, ...);
int      sprintf(char* restrict, const char* restrict, ...);
int      sscanf(const char* restrict, const char* restrict, ...);
FILE*    tmpfile(void);
char*    tmpnam(char*);
int      ungetc(int, FILE*);
int      vdprintf(int, const char* restrict, va_list);
int      vfprintf(FILE* restrict, const char* restrict, va_list);
int      vfscanf(FILE* restrict, const char* restrict, va_list);
int      vprintf(const char* restrict, va_list);
int      vscanf(const char* restrict, va_list);
int      vsnprintf(char* restrict, size_t, const char* restrict,va_list);
int      vsprintf(char* restrict, const char* restrict, va_list);
int      vsscanf(const char* restrict, const char* restrict, va_list);


CPP_END

#endif //LIBC_STDIO_H
