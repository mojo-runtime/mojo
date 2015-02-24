#ifndef linux_geteuid_hxx_
#define linux_geteuid_hxx_

#include "SYS_geteuid.h"
#include "uid_t.h"

#include "linux/__call0.hxx"

namespace linux {

static inline
uid_t
geteuid() noexcept
{
    return static_cast<uid_t>(__call0(SYS_geteuid));
}

} // namespace linux

#endif
