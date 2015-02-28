#ifndef linux_getpid_hxx_
#define linux_getpid_hxx_

#include "linux/_syscall_0.h"
#include "linux/SYS_getpid.h"
#include "linux/pid_t.h"

namespace linux {

static inline
pid_t
getpid() noexcept
{
    return static_cast<pid_t>(_syscall_0(SYS_getpid));
}

} // namespace linux

#endif
