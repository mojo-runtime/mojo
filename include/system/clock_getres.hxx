// -*- C++ -*-
#pragma once

#include "c/clockid_t.h"
#include "c/struct timespec.h"
#include "Result"

namespace system {

static inline
auto
clock_getres(clockid_t clk_id, struct timespec* res) noexcept
{
#if defined(__linux__)
#  include "c/EFAULT.h"
#  include "c/EINVAL.h"
#  define _(name) _##name = name

    enum Error
    {
        _(EFAULT),
        _(EINVAL),
    };

#  undef _
#  include "c/SYS_clock_getres.h"

    return Result<void, Error>(SYS_clock_getres, clk_id, res);

#else
#  error
#endif
}

}
