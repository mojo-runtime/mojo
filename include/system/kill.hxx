#pragma once

#include "c/pid_t.h"
#include "Result.hxx"

namespace system {

static inline
auto
kill(pid_t pid, int sig) noexcept
{
#if defined(__linux__)
#  include "c/EINVAL.h"
#  include "c/EPERM.h"
#  include "c/ESRCH.h"
#  define _(name) _##name = name

    enum Error
    {
        _(EINVAL),
        _(EPERM),
        _(ESRCH),
    };

#  undef _
#  include "c/SYS_kill.h"

    return Result<void, Error>(SYS_kill, pid, sig);

#else
#  error
#endif
}

}
