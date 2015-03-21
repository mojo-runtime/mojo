#pragma once

//--------------------------------------------------------------------------------------------------

#if defined(__linux__)

#include "c/EFAULT.h"
#include "c/EINTR.h"
#include "c/EINVAL.h"
#include "c/SYS_clock_nanosleep.h"
#include "c/clockid_t.h"
#include "c/struct timespec.h"

namespace os {

static inline
auto
clock_nanosleep(clockid_t clock_id, int flags,
                const struct timespec* request,
                struct timespec* remain) noexcept
{
    enum Error
    {
#define _(name) _##name = name
        _(EFAULT),
        _(EINTR),
        _(EINVAL),
#undef _
    };

    return Result<void, Error>(SYS_clock_nanosleep, clock_id, flags, request, remain);
}

}

//--------------------------------------------------------------------------------------------------

#else
#  error
#endif
