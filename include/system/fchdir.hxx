#pragma once

#include "Result.hxx"

namespace system {

static inline
auto
fchdir(int fd) noexcept
{
#if defined(__linux__)
#  include "c/EACCES.h"
#  include "c/EBADF.h"
#  define _(name) _##name = name

    enum Error
    {
        // TODO(?): "The general erros for `fchdir()` are listed below:
        _(EACCES),
        _(EBADF),
        // ENOTDIR, I imagine?
    };

#  undef _
#  include "c/SYS_fchdir.h"

    return Result<void, Error>(SYS_fchdir, fd);

#else
#  error
#endif
}

}
