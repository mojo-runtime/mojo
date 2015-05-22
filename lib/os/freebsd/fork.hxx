#pragma once

#include "c/EAGAIN.h"
#include "c/ENOMEM.h"
#include "syscall/SYS_fork.h"
#include "c/pid_t.h"
#include "Result.hxx"

namespace os { inline namespace freebsd {

static inline
auto
fork() noexcept
{
    enum Error
    {
        _E(AGAIN),
        _E(NOMEM),
    };

    return Result<pid_t, Error>(SYS_fork);
}

}}
