#pragma once

#include "errno/EAGAIN.h"
#include "errno/ENOMEM.h"
#include "c/pid_t.h"
#include "Result.hxx"

#define __NR_fork 2

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

    return Result<pid_t, Error>(__NR_fork);
}

}}
