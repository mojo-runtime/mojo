#pragma once

#include "c/EACCES.h"
#include "c/EBADF.h"
#include "c/ENOTDIR.h"
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
