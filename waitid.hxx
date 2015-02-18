#ifndef linux_waitid_hxx_
#define linux_waitid_hxx_

#include "c/ECHILD.h"
#include "c/EINTR.h"
#include "c/EINVAL.h"
#include "c/SYS_waitid.h"
#include "c/id_t.h"
#include "c/idtype_t.h"
#include "c/pid_t.h"
#include "c/rusage.h"
#include "c/siginfo_t.h"
#include "c/_c_syscall5.h"

#include "linux/Result.hxx"

namespace linux {

static inline
auto
waitid(idtype_t idtype, id_t id, siginfo_t* infop, int options, struct rusage* usage=nullptr) noexcept
{
    enum Error
    {
        // The process specified by (id) does not exist or is not a child of the calling process.
        // (This can happen for one's own child if the action for SIGCHLD is set to SIG_IGN.
        // See also the Linux Notes section about threads.)
        ECHILD = ECHILD,

        // WNOHANG was not set and an unblocked signal or a SIGCHLD was caught; see signal(7).
        EINTR = EINTR,

        // The `options` argument was invalid.
        EINVAL = EINVAL,
    };

    return Result<pid_t, Error>(
        _c_syscall5(SYS_getdents, idtype, id, infop, options, usage)
    );
}

} // namespace linux

#endif
