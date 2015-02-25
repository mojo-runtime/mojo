#ifndef linux_tgkill_hxx_
#define linux_tgkill_hxx_

#include "linux/c/_linux_syscall3.h"
#include "linux/c/EINVAL.h"
#include "linux/c/EPERM.h"
#include "linux/c/ESRCH.h"
#include "linux/c/SYS_tgkill.h"

#include "linux/Result.hxx"

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

    return Result<void, Error>(_linux_syscall3(SYS_tgkill, tgid, tid, sig));
}

} // namespace linux

#endif
