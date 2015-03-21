#pragma once

//--------------------------------------------------------------------------------------------------

#if defined(__linux__)

#include "c/EACCES.h"
#include "c/EBADF.h"
#include "c/SYS_fchdir.h"

#include "Result.hxx"

namespace os {

static inline
auto
fchdir(int fd) noexcept
{
    enum Error
    {
#define _(name) _##name = name
        // TODO(?): "The general erros for `fchdir()` are listed below:
        _(EACCES),
        _(EBADF),
        // ENOTDIR, I imagine?
#undef _
    };

    return Result<void, Error>(SYS_fchdir, fd);
}

}

//--------------------------------------------------------------------------------------------------

#else
#  error
#endif
