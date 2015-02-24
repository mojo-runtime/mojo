#ifndef linux_getppid_hxx_
#define linux_getppid_hxx_

#include "SYS_getppid.h"
#include "pid_t.h"

#include "_internal/_c_syscall0.h"

namespace linux {

static inline
pid_t
getppid() noexcept
{
    return static_cast<pid_t>(_c_syscall0(SYS_getppid));
}

} // namespace linux

#endif
