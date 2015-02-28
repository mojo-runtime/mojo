#ifndef linux_close_hxx_
#define linux_close_hxx_

#include "linux/_syscall_1.h"
#include "linux/EBADF.h"
#include "linux/EINTR.h"
#include "linux/EIO.h"
#include "linux/SYS_close.h"

#include "linux/Result.hxx"

namespace linux {

static inline
auto
close(int fd) noexcept
{
    enum Error
    {
        // `fd` isn't a valid open file descriptor.
        EBADF_ = EBADF,

        // The close() call was interrupted by a signal; see signal(7).
        EINTR_ = EINTR,

        // An I/O error occurred.
        EIO_ = EIO,
    };

    return Result<void, Error>(_syscall_1(SYS_close, fd));
}

} // namespace linux

#endif
