#ifndef linux_fork_hxx_
#define linux_fork_hxx_

#include "c/EAGAIN.h"
#include "c/ENOMEM.h"
#include "c/ENOSYS.h"
#include "c/SYS_fork.h"
#include "c/pid_t.h"
#include "c/_c_syscall0.h"

#include "linux/Result.hxx"

namespace linux {

static inline
auto
fork() noexcept
{
    enum Error
    {
        EAGAIN = EAGAIN,
        ENOMEM = ENOMEM,
        ENOSYS = ENOSYS,
    };

    return Result<pid_t, Error>(_c_syscall0(SYS_fork));
}

} // namespace linux

#endif
