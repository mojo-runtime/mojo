#ifndef linux_getgid_hxx_
#define linux_getgid_hxx_

#include "linux/_c_syscall0.h"
#include "linux/SYS_getgid.h"
#include "linux/gid_t.h"

namespace linux {

static inline
gid_t
getgid() noexcept
{
    return static_cast<gid_t>(_c_syscall0(SYS_getgid));
}

} // namespace linux

#endif
