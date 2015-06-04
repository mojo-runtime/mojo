#pragma once

#include "c/EINVAL.h"
#include "c/EPERM.h"
#include "c/ESRCH.h"
#include "c/pid_t.h"
#include "Result.hxx"

#define __NR_kill 37

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

    return Result<void, Error>(__NR_kill, pid, sig);
}

}}
