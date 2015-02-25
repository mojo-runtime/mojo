#ifndef linux_getppid_hxx_
#define linux_getppid_hxx_

#include "SYS_getppid.h"
#include "pid_t.h"

#include "abi/_abi_syscall_0.h"

namespace linux {

static inline
pid_t
getppid() noexcept
{
    return static_cast<pid_t>(_abi_syscall_0(SYS_getppid));
}

} // namespace linux

#endif
