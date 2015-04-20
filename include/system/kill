// -*- C++ -*-
#pragma once

#include "c/SYS_kill.h"
#include "c/pid_t.h"
#include "Result"

namespace system {

static inline
auto
kill(pid_t pid, int sig) noexcept
{
#define _(name) _##name = name
    enum Error
    {
#if defined(__linux__) || defined(__FreeBSD__)
#  include "c/EINVAL.h"
#  include "c/EPERM.h"
#  include "c/ESRCH.h"
        _(EINVAL),
        _(EPERM),
        _(ESRCH),
#endif
    };
#undef _

    return Result<void, Error>(SYS_kill, pid, sig);
}

}
