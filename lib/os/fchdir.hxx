#pragma once

#include <c/SYS_fchdir.h>
#include "Result.hxx"

namespace os {

static inline
auto
fchdir(int fd) noexcept
{
#define _(name) _##name = name
    enum Error
    {
#if defined(__linux__) || defined(__FreeBSD__)
#  include <c/EACCES.h>
#  include <c/EBADF.h>
#  include <c/ENOTDIR.h>
        _(EACCES),
        _(EBADF),
        _(ENOTDIR),
#endif
    };
#undef _

    return Result<void, Error>(SYS_fchdir, fd);
}

}
