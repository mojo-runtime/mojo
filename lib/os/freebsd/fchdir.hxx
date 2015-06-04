#pragma once

#include "errno/EACCES.h"
#include "errno/EBADF.h"
#include "errno/ENOTDIR.h"
#include "Result.hxx"

#define __NR_fchdir 13

namespace os { inline namespace freebsd {

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

}}
