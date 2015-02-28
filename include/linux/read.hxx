#ifndef linux_read_hxx_
#define linux_read_hxx_

#include "c/size_t.h"

#include "linux/EAGAIN.h"
#include "linux/EBADF.h"
#include "linux/EFAULT.h"
#include "linux/EINTR.h"
#include "linux/EINVAL.h"
#include "linux/EIO.h"
#include "linux/EISDIR.h"
#include "linux/SYS_read.h"
#include "linux/_c_syscall3.h"

#include "linux/Result.hxx"

namespace linux {

static inline
auto
read(int fd, void* buf, size_t count) noexcept
{
    enum Error
    {
        // The file descriptor `fd` has been marked nonblocking (O_NONBLOCK),
        // and the read would block.
        EAGAIN_or_EWOULDBLOCK_ = EAGAIN,

        // `fd` is not a valid file descriptor or is not open for reading.
        EBADF_ = EBADF,

        // `buf` is outside your accessible address space.
        EFAULT_ = EFAULT,

        // The call was interrupted by a signal before any data was read.
        EINTR_ = EINTR,

        // `fd` is attached to an object which is unsuitable for reading.
        //
        // The file was opened with the O_DIRECT flag, and either
        // the address specified in `buf`, the value specified in `count`,
        // or the current file offset is not suitably aligned.
        //
        // `fd` was created via a call to timerfd_create(2) and
        // the wrong size buffer was given to read().
        EINVAL_ = EINVAL,

        // I/O error.
        EIO_ = EIO,

        // `fd` refers to a directory.
        EISDIR_ = EISDIR,

        // Other errors may occur, depending on the object connected to fd.
        //   XXX: totally ignoring this
    };

    return Result<size_t, Error>(_c_syscall3(SYS_read, fd, buf, count));
}

template <typename T, size_t n>
static inline
auto
read(int fd, T(& array)[n]) noexcept
{
    enum Error
    {
        EAGAIN_or_EWOULDBLOCK = EAGAIN,
        EBADF_                = EBADF,
        // EFAULT
        EINTR_                = EINTR,
        EINVAL_               = EINVAL,
        EIO_                  = EIO,
        EISDIR_               = EISDIR,
        // XXX: Other errors may occur, depending on the object connected to fd.
    };

    // Clang was successively confused by these:
    // return read(fd, array, n * sizeof(T))._with_error<Error>();
    // return read(fd, array, n * sizeof(T)).template _with_error<Error>();

    return Result<size_t, Error>(_c_syscall3(SYS_read, fd, array, n * sizeof(T)));
}

} // namespace linux

#endif
