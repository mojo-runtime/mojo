#ifndef linux_close_hxx_
#define linux_close_hxx_

#include "EBADF.h"
#include "EINTR.h"
#include "EIO.h"
#include "SYS_close.h"

#include "linux/Result.hxx"
#include "_internal/_c_syscall1.h"

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

    return Result<void, Error>(_c_syscall1(SYS_close, fd));
}

} // namespace linux

#endif
