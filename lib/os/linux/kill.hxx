#pragma once

#include "c/EINVAL.h"
#include "c/EPERM.h"
#include "c/ESRCH.h"
#include "c/SYS_kill.h"
#include "c/pid_t.h"
#include "Result.hxx"

namespace os { inline namespace linux {

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
