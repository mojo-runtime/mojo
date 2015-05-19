// -*- C++ -*-
#pragma once

#include <c/SYS_clock_settime.h>
#include <c/clockid_t.h>
#include <c/struct-timespec.h>
#include "Result.hxx"

namespace os {

static inline
auto
clock_settime(clockid_t clk_id, const struct timespec* tp) noexcept
{
#define _(name) _##name = name
    enum Error
    {
#if defined(__linux__) || defined(__FreeBSD__)
#  include <c/EFAULT.h>
#  include <c/EINVAL.h>
#  include <c/EPERM.h>
        _(EFAULT),
        _(EINVAL),
        _(EPERM),
#endif
    };
#undef _

    return Result<void, Error>(SYS_clock_settime, clk_id, tp);
}

}
