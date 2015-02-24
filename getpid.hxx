#ifndef linux_getpid_hxx_
#define linux_getpid_hxx_

#include "SYS_getpid.h"
#include "pid_t.h"

#include "_internal/_c_syscall0.h"

namespace linux {

static inline
pid_t
getpid() noexcept
{
    return static_cast<pid_t>(_c_syscall0(SYS_getpid));
}

} // namespace linux

#endif
