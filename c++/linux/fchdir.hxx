#pragma once

#include "c/EACCES.h"
#include "c/EBADF.h"
#include "c/ENOTDIR.h"
#include "Result.hxx"

#if defined(__arm__)
#  define __NR_fchdir 133
#elif defined(__x86_64__)
#  define __NR_fchdir 81
#else
#  error
#endif

namespace linux {

static inline
auto
fchdir(int fd) noexcept
{
    enum Error
    {
        _E(ACCES),
        _E(BADF),
        _E(NOTDIR),
    };

    return Result<void, Error>(__NR_fchdir, fd);
}

}
