#pragma once

#include "c/EAGAIN.h"
#include "c/ENOMEM.h"
#include "c/ENOSYS.h"
#include "c/pid_t.h"
#include "Result.hxx"

#if defined(__arm__)
#  define __NR_fork 2
#elif defined(__x86_64__)
#  define __NR_fork 57
#else
#  error
#endif

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

    return Result<pid_t, Error>(__NR_fork);
}

}}
