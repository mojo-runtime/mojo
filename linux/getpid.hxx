#ifndef linux_getpid_hxx_
#define linux_getpid_hxx_

#include "abi/_abi_syscall_0.h"
#include "c/SYS_getpid.h"
#include "c/pid_t.h"

namespace linux {

static inline
pid_t
getpid() noexcept
{
    return static_cast<pid_t>(_abi_syscall_0(SYS_getpid));
}

} // namespace linux

#endif
