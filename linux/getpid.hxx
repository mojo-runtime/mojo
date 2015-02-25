#ifndef linux_getpid_hxx_
#define linux_getpid_hxx_

#include "linux/c/_c_syscall0.h"
#include "linux/c/SYS_getpid.h"
#include "linux/c/pid_t.h"

namespace linux {

static inline
pid_t
getpid() noexcept
{
    return static_cast<pid_t>(_c_syscall0(SYS_getpid));
}

} // namespace linux

#endif
