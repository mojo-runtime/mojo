#pragma once

#include "c/EINVAL.h"
#include "c/EPERM.h"
#include "c/ESRCH.h"
#include "c/SYS_kill.h"
#include "c/pid_t.h"

#include "Result.hxx"

namespace linux {

static inline
auto
kill(pid_t pid, int sig) noexcept
{
    enum Error
    {
#define _(name) _##name = name
        _(EINVAL),
        _(EPERM),
        _(ESRCH),
#undef _
    };

    return Result<void, Error>(SYS_kill, pid, sig);
}

}
