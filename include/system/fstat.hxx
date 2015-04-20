#pragma once

#include "c/SYS_fstat.h"
#include "c/struct-stat.h"
#include "Result.hxx"

namespace system {

static inline
auto
fstat(int fd, struct stat* buf) noexcept
{
#define _(name) _##name = name
    enum Error
    {
#if defined(__linux__) || defined(__FreeBSD__)
#  include "c/EBADF.h"
#  include "c/EFAULT.h"
        _(EBADF),
        _(EFAULT),
#endif
#if defined(__FreeBSD__)
#  include "c/EIO.h"
        _(EIO),
#endif
#if defined(__linux__)
#  include "c/ENOMEM.h"
        _(ENOMEM),
#endif
#if defined(__linux__) || defined(__FreeBSD__)
#  include "c/EOVERFLOW.h"
        _(EOVERFLOW),
#endif
    };
#undef _

    return Result<void, Error>(SYS_fstat, fd, buf);
}

}
