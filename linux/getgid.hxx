#ifndef linux_getgid_hxx_
#define linux_getgid_hxx_

#include "abi/_abi_syscall_0.h"
#include "c/SYS_getgid.h"
#include "c/gid_t.h"

namespace linux {

static inline
gid_t
getgid() noexcept
{
    return static_cast<gid_t>(_abi_syscall_0(SYS_getgid));
}

} // namespace linux

#endif
