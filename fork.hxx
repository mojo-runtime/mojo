#ifndef linux_fork_hxx_
#define linux_fork_hxx_

#include "c/EAGAIN.h"
#include "c/ENOMEM.h"
#include "c/ENOSYS.h"
#include "c/SYS_fork.h"
#include "c/pid_t.h"
#include "c/extension/x_syscall0.h"

#include "linux/Result.hxx"

namespace linux {

static inline
auto
fork() noexcept
{
    enum Error
    {
        // fork() cannot allocate sufficient memory to copy the parent's page tables
        // and allocate a task structure for the child.
        //
        // It was not possible to create a new process because
        // the caller's RLIMIT_NPROC resource limit was encountered.
        // To exceed this limit, the process must have either the CAP_SYS_ADMIN
        // or the CAP_SYS_RESOURCE capability.
        EAGAIN = EAGAIN,

        // fork() failed to allocate the necessary kernel structures because memory is tight.
        ENOMEM = ENOMEM,

        // fork() is not supported on this platform
        // (for example, hardware without a Memory-Management Unit).
        ENOSYS = ENOSYS,
    };

    return Result<pid_t, Error>(x_syscall0(SYS_fork));
}

} // namespace linux

#endif
