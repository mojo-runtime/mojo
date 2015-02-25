#ifndef linux_waitid_hxx_
#define linux_waitid_hxx_

#include "ECHILD.h"
#include "EINTR.h"
#include "EINVAL.h"
#include "SYS_waitid.h"
#include "id_t.h"
#include "idtype_t.h"
#include "pid_t.h"
#include "siginfo_t.h"
#include "struct-rusage.h"

#include "linux/Result.hxx"
#include "abi/_abi_syscall_5.h"

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
        ECHILD_ = ECHILD,

        // WNOHANG was not set and an unblocked signal or a SIGCHLD was caught; see signal(7).
        EINTR_ = EINTR,

        // The `options` argument was invalid.
        EINVAL_ = EINVAL,
    };

    return Result<pid_t, Error>(
        _abi_syscall_5(SYS_getdents, idtype, id, infop, options, usage)
    );
}

} // namespace linux

#endif
