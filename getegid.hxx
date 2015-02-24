#ifndef linux_getegid_hxx_
#define linux_getegid_hxx_

#include "SYS_getegid.h"
#include "gid_t.h"

#include "_internal/_c_syscall0.h"

namespace linux {

static inline
gid_t
getegid() noexcept
{
    return static_cast<gid_t>(_c_syscall0(SYS_getegid));
}

} // namespace linux

#endif
