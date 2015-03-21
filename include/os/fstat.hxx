#pragma once

//--------------------------------------------------------------------------------------------------

#if defined(__linux__)

#include "c/EBADF.h"
#include "c/EFAULT.h"
#include "c/ENOMEM.h"
#include "c/EOVERFLOW.h"
#include "c/SYS_fstat.h"
#include "c/struct stat.h"

#include "Result.hxx"

namespace os {

static inline
auto
fstat(int fd, struct stat* buf) noexcept
{
    enum Error
    {
#define _(name) _##name = name
        _(EBADF),
        _(EFAULT),
        _(ENOMEM),
        _(EOVERFLOW),
#undef _
    };

    return Result<void, Error>(SYS_fstat, fd, buf);
}

}

//--------------------------------------------------------------------------------------------------

#else
#  error
#endif
