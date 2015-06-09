#pragma once

#include "errno/EBADF.h"
#include "errno/EFAULT.h"
#include "errno/ENOMEM.h"
#include "errno/EOVERFLOW.h"
#include "stat/struct-stat.h"
#include "Result.hxx"

#if defined(__arm__)
#  define __NR_fstat 108
#elif defined(__x86_64__)
#  define __NR_fstat 5
#else
#  error
#endif

namespace linux {

static inline
auto
fstat(int fd, struct stat* sb) noexcept
{
    enum Error
    {
        _E(BADF),
        _E(FAULT),
        _E(NOMEM),
        _E(OVERFLOW),
    };

    return Result<void, Error>(__NR_fstat, fd, sb);
}

}
