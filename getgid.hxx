#ifndef linux_getgid_hxx_
#define linux_getgid_hxx_

#include "SYS_getgid.h"
#include "gid_t.h"

#include "_internal/_c_syscall0.h"

namespace linux {

static inline
gid_t
getgid() noexcept
{
    return static_cast<gid_t>(_c_syscall0(SYS_getgid));
}

} // namespace linux

#endif
