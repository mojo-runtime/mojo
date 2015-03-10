#ifndef linux_tgkill_hxx_
#define linux_tgkill_hxx_

#include "linux/_syscall_3.h"
#include "c/EINVAL.h"
#include "c/EPERM.h"
#include "c/ESRCH.h"
#include "c/SYS_tgkill.h"

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

    return Result<void, Error>(_syscall_3(SYS_tgkill, tgid, tid, sig));
}

} // namespace linux

#endif
