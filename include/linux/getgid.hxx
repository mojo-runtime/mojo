#ifndef linux_getgid_hxx_
#define linux_getgid_hxx_

#include "linux/c/_linux_syscall0.h"
#include "linux/c/SYS_getgid.h"
#include "linux/c/gid_t.h"

namespace linux {

static inline
gid_t
getgid() noexcept
{
    return static_cast<gid_t>(_linux_syscall0(SYS_getgid));
}

} // namespace linux

#endif
