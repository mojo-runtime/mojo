#ifndef linux_getegid_hxx_
#define linux_getegid_hxx_

#include "linux/_c_syscall0.h"
#include "linux/SYS_getegid.h"
#include "linux/gid_t.h"

namespace linux {

static inline
gid_t
getegid() noexcept
{
    return static_cast<gid_t>(_c_syscall0(SYS_getegid));
}

} // namespace linux

#endif
