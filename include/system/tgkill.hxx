// -*- C++ -*-
#pragma once

#include "Result.hxx"

namespace system {

static inline
auto
tgkill(int tgid, int tid, int sig) noexcept
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
#  include "c/SYS_tgkill.h"

    return Result<void, Error>(SYS_tgkill, tgid, tid, sig);

#else
#  error
#endif
}

}
