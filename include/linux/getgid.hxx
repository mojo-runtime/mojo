#ifndef linux_getgid_hxx_
#define linux_getgid_hxx_

#include "c/SYS_getgid.h"
#include "c/gid_t.h"

#include "__call-0.hxx"

namespace linux {

static inline
gid_t
getgid() noexcept
{
    return static_cast<gid_t>(__call(SYS_getgid));
}

} // namespace linux

#endif
