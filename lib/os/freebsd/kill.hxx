#pragma once

#include "errno/EINVAL.h"
#include "errno/EPERM.h"
#include "errno/ESRCH.h"
#include "syscall/SYS_kill.h"
#include "c/pid_t.h"
#include "Result.hxx"

namespace os { inline namespace freebsd {

static inline
auto
kill(pid_t pid, int sig) noexcept
{
    enum Error
    {
        _E(INVAL),
        _E(PERM),
        _E(SRCH),
    };

    return Result<void, Error>(SYS_kill, pid, sig);
}

}}
