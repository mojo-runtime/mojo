#pragma once

#include "c/EACCES.h"
#include "c/EBADF.h"
#include "c/ENOTDIR.h"
#include "c/SYS_fchdir.h"
#include "Result.hxx"

namespace os { inline namespace linux {

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

    return Result<void, Error>(SYS_fchdir, fd);
}

}}
