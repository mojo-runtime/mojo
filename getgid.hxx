#ifndef linux_getgid_hxx_
#define linux_getgid_hxx_

#include "c/SYS_getgid.h"
#include "c/gid_t.h"
#include "linux/__call0.hxx"

namespace linux {

static inline
gid_t
getgid() noexcept
{
    return static_cast<gid_t>(__call0(SYS_getgid));
}

} // namespace linux

#endif
