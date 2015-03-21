#pragma once

#include "c/EAGAIN.h"
#include "c/ENOMEM.h"
#include "c/ENOSYS.h"
#include "c/SYS_fork.h"
#include "c/pid_t.h"

#include "Result.hxx"

namespace linux {

static inline
auto
fork() noexcept
{
    enum Error
    {
#define _(name) _##name = name
        _(EAGAIN),
        _(ENOMEM),
        _(ENOSYS),
#undef _
    };

    return Result<pid_t, Error>(SYS_fork);
}

}
