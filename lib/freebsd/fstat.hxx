#pragma once

#include "errno/EBADF.h"
#include "errno/EFAULT.h"
#include "errno/EIO.h"
#include "errno/EOVERFLOW.h"
#include "stat/struct-stat.h"
#include "Result.hxx"

#define __NR_fstat 189

namespace freebsd {

static inline
auto
fstat(int fd, struct stat* sb) noexcept
{
    enum Error
    {
        _E(BADF),
        _E(FAULT),
        _E(IO),
        _E(OVERFLOW),
    };

    return Result<void, Error>(__NR_fstat, fd, sb);
}

}
