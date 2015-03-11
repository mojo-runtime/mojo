#ifndef _os_linux_fchdir_hxx_
#define _os_linux_fchdir_hxx_

#include "c/EACCES.h"
#include "c/EBADF.h"
#include "c/SYS_fchdir.h"

#include "Result.hxx"
#include "__call-1.hxx"

namespace os { inline namespace _linux_ {

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

    return Result<void, Error>(__call(SYS_fchdir, fd));
}

}}

#endif
