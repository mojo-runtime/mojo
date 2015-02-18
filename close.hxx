#ifndef linux_close_hxx_
#define linux_close_hxx_

#include "c/EBADF.h"
#include "c/EINTR.h"
#include "c/EIO.h"
#include "c/FileDescriptor.h"
#include "c/SYS_close.h"
#include "c/_c_syscall1.h"

#include "linux/Result.hxx"

namespace linux {

static inline
auto
close(FileDescriptor fd) noexcept
{
    enum Error
    {
        EBADF = EBADF,
        EINTR = EINTR,
        EIO   = EIO,
    };

    return Result<void, Error>(_c_syscall1(SYS_close, fd));
}

} // namespace linux

#endif
