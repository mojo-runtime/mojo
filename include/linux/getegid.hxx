#ifndef linux_getegid_hxx_
#define linux_getegid_hxx_

#include "linux/_syscall_0.h"
#include "c/SYS_getegid.h"
#include "c/gid_t.h"

namespace linux {

static inline
gid_t
getegid() noexcept
{
    return static_cast<gid_t>(_syscall_0(SYS_getegid));
}

} // namespace linux

#endif
