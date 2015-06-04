#pragma once

#include "c/EINVAL.h"
#include "c/EPERM.h"
#include "c/ESRCH.h"
#include "c/pid_t.h"
#include "Result.hxx"

#if defined(__arm__)
#  define __NR_kill 37
#elif defined(__x86_64__)
#  define __NR_kill 62
#else
#  error
#endif

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

    return Result<void, Error>(__NR_kill, pid, sig);
}

}}
