#ifndef linux_gettid_hxx_
#define linux_gettid_hxx_

#include "abi/_abi_syscall_0.h"
#include "c/SYS_gettid.h"
#include "c/pid_t.h"

namespace linux {

static inline
pid_t
gettid() noexcept
{
    return static_cast<pid_t>(_abi_syscall_0(SYS_gettid));
}

} // namespace linux

#endif
