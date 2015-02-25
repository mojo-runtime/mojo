#ifndef linux_gettid_hxx_
#define linux_gettid_hxx_

#include "SYS_gettid.h"
#include "pid_t.h"

#include "abi/_abi_syscall_0.h"

namespace linux {

static inline
pid_t
gettid() noexcept
{
    return static_cast<pid_t>(_abi_syscall_0(SYS_gettid));
}

} // namespace linux

#endif
