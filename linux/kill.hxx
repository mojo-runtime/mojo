#ifndef linux_kill_hxx_
#define linux_kill_hxx_

#include "linux/c/_c_syscall2.h"
#include "linux/c/EINVAL.h"
#include "linux/c/EPERM.h"
#include "linux/c/ESRCH.h"
#include "linux/c/SYS_kill.h"
#include "linux/c/pid_t.h"

#include "linux/Result.hxx"

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

    return Result<void, Error>(_c_syscall2(SYS_kill, pid, sig));
}

} // namespace linux

#endif
