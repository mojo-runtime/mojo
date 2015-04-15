// -*- C++ -*-
#pragma once

#include "c/pid_t.h"
#include "Result.hxx"

namespace system {

static inline
auto
fork() noexcept
{
#if defined(__linux__)
#  include "c/EAGAIN.h"
#  include "c/ENOMEM.h"
#  include "c/ENOSYS.h"
#  define _(name) _##name = name

    enum Error
    {
        _(EAGAIN),
        _(ENOMEM),
        _(ENOSYS),
    };

#  undef _
#  include "c/SYS_fork.h"

    return Result<pid_t, Error>(SYS_fork);

#else
#  error
#endif
}

}
