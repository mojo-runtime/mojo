#ifndef _linux_kill_hxx_
#define _linux_kill_hxx_

#include "c/EINVAL.h"
#include "c/EPERM.h"
#include "c/ESRCH.h"
#include "c/SYS_kill.h"
#include "c/pid_t.h"

#include "Result.hxx"
#include "abi/syscall-2.hxx"

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

    return Result<void, Error>(abi::syscall(SYS_kill, pid, sig));
}

}

#endif
