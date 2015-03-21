#pragma once

//--------------------------------------------------------------------------------------------------

#if defined(__linux__)

#include "c/EINVAL.h"
#include "c/EPERM.h"
#include "c/ESRCH.h"
#include "c/SYS_tgkill.h"

#include "Result.hxx"

namespace os {

static inline
auto
tgkill(int tgid, int tid, int sig) noexcept
{
    enum Error
    {
#define _(name) _##name = name
        _(EINVAL),
        _(EPERM),
        _(ESRCH),
#undef _
    };

    return Result<void, Error>(SYS_tgkill, tgid, tid, sig);
}

}

//--------------------------------------------------------------------------------------------------

#else
#  error
#endif
