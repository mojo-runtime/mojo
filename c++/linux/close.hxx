#pragma once

#include "EBADF.h"
#include "EINTR.h"
#include "EIO.h"
#include "SYS_close.h"

#include "Result.hxx"
#include "abi/syscall-1.hxx"

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

    return Result<void, Error>(abi::syscall(SYS_close, fd));
}

}
