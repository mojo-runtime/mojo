#pragma once

#include "c/EBADF.h"
#include "c/EFAULT.h"
#include "c/EIO.h"
#include "c/EOVERFLOW.h"
#include "c/struct-stat.h"
#include "Result.hxx"

#define __NR_fstat 189

namespace os { inline namespace freebsd {

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

}}
