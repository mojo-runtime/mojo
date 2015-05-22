#pragma once

#include "c/EBADF.h"
#include "c/EBUSY.h"
#include "c/EINTR.h"
#include "c/EINVAL.h"
#include "c/EMFILE.h"
#include "c/SYS_dup3.h"
#include "Result.hxx"

namespace os { inline namespace linux {

static inline
auto
dup3(int oldfd, int newfd, int flags) noexcept
{
    enum Error
    {
        _E(BADF),
        _E(BUSY),
        _E(INTR),
        _E(INVAL),
        _E(MFILE),
    };

    return Result<int, Error>(SYS_dup3, oldfd, newfd, flags);
}

}}
