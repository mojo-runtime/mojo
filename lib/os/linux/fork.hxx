#pragma once

#include "errno/EAGAIN.h"
#include "errno/ENOMEM.h"
#include "errno/ENOSYS.h"
#include "syscall/SYS_fork.h"
#include "c/pid_t.h"
#include "Result.hxx"

namespace os { inline namespace linux {

static inline
auto
fork() noexcept
{
    enum Error
    {
        _E(AGAIN),
        _E(NOMEM),
        _E(NOSYS),
    };

    return Result<pid_t, Error>(SYS_fork);
}

}}
