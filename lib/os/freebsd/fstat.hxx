#pragma once

#include "errno/EBADF.h"
#include "errno/EFAULT.h"
#include "errno/EIO.h"
#include "errno/EOVERFLOW.h"
#include "syscall/SYS_fstat.h"
#include "c/struct-stat.h"
#include "Result.hxx"

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

    return Result<void, Error>(SYS_fstat, fd, sb);
}

}}
