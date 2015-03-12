#ifndef _linux_waitid_hxx_
#define _linux_waitid_hxx_

#include "c/ECHILD.h"
#include "c/EINTR.h"
#include "c/EINVAL.h"
#include "c/SYS_waitid.h"
#include "c/id_t.h"
#include "c/idtype_t.h"
#include "c/pid_t.h"
#include "c/siginfo_t.h"
#include "c/struct-rusage.h"

#include "Result.hxx"
#include "__call-5.hxx"

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
        __call(SYS_getdents, idtype, id, infop, options, usage)
    );
}

}

#endif
