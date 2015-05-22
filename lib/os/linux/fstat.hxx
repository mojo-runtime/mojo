#pragma once

#include "c/EBADF.h"
#include "c/EFAULT.h"
#include "c/ENOMEM.h"
#include "c/EOVERFLOW.h"
#include "syscall/SYS_fstat.h"
#include "c/struct-stat.h"
#include "Result.hxx"

namespace os { inline namespace linux {

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

    return Result<void, Error>(SYS_fstat, fd, sb);
}

}}
