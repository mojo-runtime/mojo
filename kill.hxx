#ifndef linux_kill_hxx_
#define linux_kill_hxx_

#include "c/EINVAL.h"
#include "c/EPERM.h"
#include "c/ESRCH.h"
#include "c/SYS_kill.h"
#include "c/pid_t.h"
#include "c/extension/x_syscall2.h"

#include "linux/Result.hxx"

namespace linux {

static inline
auto
kill(pid_t pid, int sig) noexcept
{
    enum Error
    {
        // An invalid signal was specified.
        EINVAL = EINVAL,

        // The process does not have permission to send the signal to any of the target processes.
        EPERM = EPERM,

        // The pid or process group does not exist. Note that an existing process might be a zombie,
        // a process which already committed termination, but has not yet been wait(2)ed for.
        ESRCH = ESRCH,
    };

    return Result<void, Error>(x_syscall2(SYS_kill, pid, sig));
}

} // namespace linux

#endif
