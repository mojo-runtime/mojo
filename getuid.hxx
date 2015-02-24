#ifndef linux_getuid_hxx_
#define linux_getuid_hxx_

#include "SYS_getuid.h"
#include "uid_t.h"

#include "linux/__call0.hxx"

namespace linux {

static inline
uid_t
getuid() noexcept
{
    return static_cast<uid_t>(__call0(SYS_getuid));
}

} // namespace linux

#endif
