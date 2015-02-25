#ifndef linux_getgid_hxx_
#define linux_getgid_hxx_

#include "SYS_getgid.h"
#include "gid_t.h"

#include "abi/_abi_syscall_0.h"

namespace linux {

static inline
gid_t
getgid() noexcept
{
    return static_cast<gid_t>(_abi_syscall_0(SYS_getgid));
}

} // namespace linux

#endif
