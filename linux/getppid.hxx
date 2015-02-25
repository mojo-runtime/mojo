#ifndef linux_getppid_hxx_
#define linux_getppid_hxx_

#include "abi/_abi_syscall_0.h"
#include "c/SYS_getppid.h"
#include "c/pid_t.h"

namespace linux {

static inline
pid_t
getppid() noexcept
{
    return static_cast<pid_t>(_abi_syscall_0(SYS_getppid));
}

} // namespace linux

#endif
