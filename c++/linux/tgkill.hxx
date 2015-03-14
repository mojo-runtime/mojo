#pragma once

#include "EINVAL.h"
#include "EPERM.h"
#include "ESRCH.h"
#include "SYS_tgkill.h"
#include "__syscall3.h"

#include "Result.hxx"

namespace linux {

static inline
auto
tgkill(int tgid, int tid, int sig) noexcept
{
    enum Error
    {
        // An invalid thread ID, thread group ID, or signal was specified.
        EINVAL_ = EINVAL,

        // Permission denied.  For the required permissions, see kill(2).
        EPERM_ = EPERM,

        // No process with the specified thread ID (and thread group ID) exists.
        ESRCH_ = ESRCH,
    };

    return Result<void, Error>(__syscall3(SYS_tgkill, tgid, tid, sig));
}

}
