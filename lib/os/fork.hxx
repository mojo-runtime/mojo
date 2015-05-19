#pragma once

#include <c/SYS_fork.h>
#include <c/pid_t.h>
#include "Result.hxx"

namespace os {

static inline
auto
fork() noexcept
{
#define _(name) _##name = name
    enum Error
    {
#if defined(__linux__) || defined(__FreeBSD__)
#  include <c/EAGAIN.h>
#  include <c/ENOMEM.h>
        _(EAGAIN),
        _(ENOMEM),
#endif
#if defined(__linux__)
#  include <c/ENOSYS.h>
        _(ENOSYS),
#endif
    };
#undef _

    return Result<pid_t, Error>(SYS_fork);
}

}
