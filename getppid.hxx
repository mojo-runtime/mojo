#ifndef linux_getppid_hxx_
#define linux_getppid_hxx_

#include "c/SYS_getppid.h"
#include "c/pid_t.h"
#include "c/extension/x_syscall0.h"

namespace linux {

static inline
pid_t
getppid() noexcept
{
    return static_cast<pid_t>(x_syscall0(SYS_getppid));
}

} // namespace linux

#endif
