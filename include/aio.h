/**
 * @file aio.h
 * @brief Defines functions to handle asynchronous input and output
 *
 * @date 28 December 2025
 * @author Max Tyson
 */

#ifndef LIBC_AIO_H
#define LIBC_AIO_H

#include <sys/types.h>
#include <time.h>
#include <signal.h>

CPP_START

/**
 * @struct aiocb
 * @brief Defines an async I/O control block, the parameters that control an I/O operation
 */
struct aiocb
{
	int             aio_fildes;		///< The descriptor of the file to write to
	off_t           aio_offset;		///< Where in the file to write to
	volatile void*	aio_buf;		///< The data buffer to write from
	size_t          aio_nbytes;		///< Length in bytes of the buffer
	int             aio_reqprio;	///< The priority of the operation (subtracted from the threads priority)
	struct sigevent aio_sigevent;	///< Signal to notify the thread when the operation completes (@see SIGEV_*)
	int             aio_lio_opcode;	///< The type of operation to preform (used only by lio_listio)

};

#define AIO_ALLDONE		0	///< None of the requested operations could cancel as they are all complete
#define AIO_CANCELED    1	///< All the requested operations canceled successfully
#define AIO_NOTCANCELED 2	///< Some of the requested operations couldn't cancel as they are in progress

#define LIO_NOP			0	///< This list item has no operation and can be skipped
#define LIO_WRITE		1	///< This list item is a write operation
#define LIO_READ		2	///< This list item is a read operation

#define LIO_WAIT		0	///< Return once all operations are completed
#define LIO_NOWAIT		1	///< Return once all operations are queued

int      aio_cancel(int, struct aiocb*);
int      aio_error(const struct aiocb*);
int      aio_fsync(int, struct aiocb*);
int      aio_read(struct aiocb*);
ssize_t  aio_return(struct aiocb*);
int      aio_suspend(const struct aiocb* const [], int, const struct timespec *);
int      aio_write(struct aiocb*);

int      lio_listio(int, struct aiocb* restrict const [restrict], int, struct sigevent* restrict);

CPP_END

#endif //LIBC_AIO_H
