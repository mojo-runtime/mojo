#pragma once

#include "c/EAGAIN.h"
#include "c/EBADF.h"
#include "c/EDESTADDRREQ.h"
#include "c/EDQUOT.h"
#include "c/EFAULT.h"
#include "c/EFBIG.h"
#include "c/EINTR.h"
#include "c/EINVAL.h"
#include "c/EIO.h"
#include "c/ENOSPC.h"
#include "c/EPIPE.h"
#include "c/SYS_write.h"
#include "c/size_t.h"

#include "Result.hxx"
#include "abi/syscall-3.hxx"

namespace linux {

static inline
auto
write(int fd, const void* buf, size_t count) noexcept
{
    enum Error
    {
        // The file descriptor `fd` has been marked nonblocking (O_NONBLOCK),
        // and the read would block.
        EAGAIN_or_EWOULDBLOCK_ = EAGAIN,

        // `fd` is not a valid file descriptor.
        //
        // `fd` is not open for writing.
        EBADF_ = EBADF,

        // `fd` refers to a datagram socket for which a
        // peer address has not been set using connect(2).
        EDESTADDRREQ_ = EDESTADDRREQ,

        // The user's quota of disk blocks on the filesystem containing
        // the file referred to by `fd` has been exhausted.
        EDQUOT_ = EDQUOT,

        // `buf` is outside your accessible address space.
        EFAULT_ = EFAULT,

        // An attempt was made to write a file that exceeds
        // the implementation-defined maximum file size or the process's file size limit,
        // or to write at a position past the maximum allowed offset.
        EFBIG_ = EFBIG,

        // The call was interrupted by a signal before any data was written.
        EINTR_ = EINTR,

        // `fd` is attached to an object which is unsuitable for writing.
        //
        // The file was opened with the O_DIRECT flag, and either
        // the address specified in `buf`, the value specified in `count`,
        // or the current file offset is not suitably aligned.
        EINVAL_ = EINVAL,

        // A low-level I/O error occurred while modifying the inode.
        EIO_ = EIO,

        // The device containing the file referred to by `fd` has no room for the data.
        ENOSPC_ = ENOSPC,

        // `fd` is connected to a pipe or socket whose reading end is closed.
        EPIPE_ = EPIPE,

        // "Other errors may occur, depending on the object connected to fd."
        //   XXX: totally ignoring this
    };

    return Result<size_t, Error>(abi::syscall(SYS_write, fd, buf, count));
}

template <typename T, size_t n>
static inline
auto
write(int fd, const T(& array)[n]) noexcept
{
    enum Error
    {
        EAGAIN_or_EWOULDBLOCK_ = EAGAIN,
        EBADF_                 = EBADF,
        EDESTADDRREQ_          = EDESTADDRREQ,
        EDQUOT_                = EDQUOT,
        // EFAULT
        EFBIG_                 = EFBIG,
        EINTR_                 = EINTR,
        EINVAL_                = EINVAL,
        EIO_                   = EIO,
        ENOSPC_                = ENOSPC,
        EPIPE_                 = EPIPE,
        // XXX: Other errors may occur, depending on the object connected to fd.
    };

    // We can't use write(...)._with_error; see `read_::into`.
    return Result<size_t, Error>(abi::syscall(SYS_write, fd, array, n * sizeof(T)));
}

}
