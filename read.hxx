#ifndef linux_read_hxx_
#define linux_read_hxx_

#include "c/EAGAIN.h"
#include "c/EBADF.h"
#include "c/EFAULT.h"
#include "c/EINTR.h"
#include "c/EINVAL.h"
#include "c/EIO.h"
#include "c/EISDIR.h"
#include "c/SYS_read.h"
#include "c/size_t.h"
#include "c/_c_syscall3.h"

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
        EAGAIN_or_EWOULDBLOCK = EAGAIN,

        // `fd` is not a valid file descriptor or is not open for reading.
        EBADF = EBADF,

        // `buf` is outside your accessible address space.
        EFAULT = EFAULT,

        // The call was interrupted by a signal before any data was read.
        EINTR = EINTR,

        // `fd` is attached to an object which is unsuitable for reading;
        // or the file was opened with the O_DIRECT flag, and either
        // the address specified in `buf`, the value specified in `count`,
        // or the current file offset is not suitably aligned.
        //
        // `fd` was created via a call to timerfd_create(2) and
        // the wrong size buffer was given to read().
        EINVAL = EINVAL,

        // I/O error.
        EIO = EIO,

        // `fd` refers to a directory.
        EISDIR = EISDIR,

        // Other errors may occur, depending on the object connected to fd.
        //   XXX: totally ignoring this
    };

    return Result<size_t, Error>(_c_syscall3(SYS_read, fd, buf, count));
}

} // namespace linux

#endif
