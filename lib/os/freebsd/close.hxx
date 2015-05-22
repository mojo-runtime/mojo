#pragma once

#include <c/size_t.h>
#include "errno/EBADF.h"
#include "errno/ECONNRESET.h"
#include "errno/EINTR.h"
#include "errno/ENOSPC.h"
#include "syscall/SYS_close.h"
#include "Result.hxx"

namespace os { inline namespace freebsd {

static inline
auto
close(int fd) noexcept
{
    enum Error
    {
        _E(BADF),
        _E(CONNRESET),
        _E(INTR),
        _E(NOSPC),
    };

    return Result<void, Error>(SYS_close, fd);
}

}}
