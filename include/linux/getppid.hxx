#ifndef linux_getppid_hxx_
#define linux_getppid_hxx_

#include "linux/_c_syscall0.h"
#include "linux/SYS_getppid.h"
#include "linux/pid_t.h"

namespace linux {

static inline
pid_t
getppid() noexcept
{
    return static_cast<pid_t>(_c_syscall0(SYS_getppid));
}

} // namespace linux

#endif
