#pragma once

#include "c/EBADF.h"
#include "c/EFAULT.h"
#include "c/ENOMEM.h"
#include "c/EOVERFLOW.h"
#include "c/struct-stat.h"
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
