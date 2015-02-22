#ifndef linux_tgkill_hxx_
#define linux_tgkill_hxx_

#include "c/EINVAL.h"
#include "c/EPERM.h"
#include "c/ESRCH.h"
#include "c/SYS_tgkill.h"
#include "c/extension/x_syscall3.h"

#include "linux/Result.hxx"

namespace linux {

static inline
auto
tgkill(int tgid, int tid, int sig) noexcept
{
    enum Error
    {
        // An invalid thread ID, thread group ID, or signal was specified.
        EINVAL = EINVAL,

        // Permission denied.  For the required permissions, see kill(2).
        EPERM = EPERM,

        // No process with the specified thread ID (and thread group ID) exists.
        ESRCH = ESRCH,
    };

    return Result<void, Error>(x_syscall3(SYS_tgkill, tgid, tid, sig));
}

} // namespace linux

#endif
