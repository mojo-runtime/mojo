#ifndef linux_geteuid_hxx_
#define linux_geteuid_hxx_

#include "SYS_geteuid.h"
#include "uid_t.h"

#include "abi/_abi_syscall_0.h"

namespace linux {

static inline
uid_t
geteuid() noexcept
{
    return static_cast<uid_t>(_abi_syscall_0(SYS_geteuid));
}

} // namespace linux

#endif
