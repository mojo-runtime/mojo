#ifndef linux_fchdir_hxx_
#define linux_fchdir_hxx_

#include "EACCES.h"
#include "EBADF.h"
#include "SYS_fchdir.h"

#include "linux/Result.hxx"
#include "abi/_abi_syscall_1.h"

namespace linux {

static inline
auto
fchdir(int fd) noexcept
{
    // TODO(?): "The general errors for `fchdir()` are listed below:

    enum Error
    {
        // Search permission was denied on the directory open on `fd`.
        EACCES_ = EACCES,

        // `fd` is not a valid file descriptor.
        EBADF_ = EBADF,

        // ENOTDIR, I imagine?
    };

    return Result<void, Error>(_abi_syscall_1(SYS_fchdir, fd));
}

} // namespace linux

#endif
