#pragma once

#include "c/EBADF.h"
#include "c/EINTR.h"
#include "c/EIO.h"
#include "syscall/SYS_close.h"
#include "Result.hxx"

namespace os { inline namespace linux {

static inline
auto
close(int fd) noexcept
{
    enum Error
    {
        _E(BADF),
        _E(INTR),
        _E(IO),
    };

    return Result<void, Error>(SYS_close, fd);
}

}}
