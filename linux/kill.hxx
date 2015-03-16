#pragma once

#include "EINVAL.h"
#include "EPERM.h"
#include "ESRCH.h"
#include "SYS_kill.h"
#include "pid_t.h"
#include "__syscall2.h"

#include "Result.hxx"

namespace linux {

static inline
auto
kill(pid_t pid, int sig) noexcept
{
    enum Error
    {
        // An invalid signal was specified.
        EINVAL_ = EINVAL,

        // The process does not have permission to send the signal to any of the target processes.
        EPERM_ = EPERM,

        // The pid or process group does not exist. Note that an existing process might be a zombie,
        // a process which already committed termination, but has not yet been wait(2)ed for.
        ESRCH_ = ESRCH,
    };

    return Result<void, Error>(__syscall2(SYS_kill, pid, sig));
}

}