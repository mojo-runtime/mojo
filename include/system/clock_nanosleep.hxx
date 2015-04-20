// -*- C++ -*-
#pragma once

#include "c/clockid_t.h"
#include "c/struct-timespec.h"
#include "Result.hxx"

namespace system {

static inline
auto
clock_nanosleep(clockid_t clock_id, int flags,
                const struct timespec* request,
                struct timespec* remain) noexcept
{
#if defined(__linux__)
#  include "c/EFAULT.h"
#  include "c/EINTR.h"
#  include "c/EINVAL.h"
#  define _(name) _##name = name

    enum Error
    {
        _(EFAULT),
        _(EINTR),
        _(EINVAL),
    };

#  undef _
#  include "c/SYS_clock_nanosleep.h"

    return Result<void, Error>(SYS_clock_nanosleep, clock_id, flags, request, remain);

#else
#  error
#endif
}

}
