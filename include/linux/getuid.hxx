#ifndef linux_getuid_hxx_
#define linux_getuid_hxx_

#include "linux/_syscall_0.h"
#include "c/SYS_getuid.h"
#include "c/uid_t.h"

namespace linux {

static inline
uid_t
getuid() noexcept
{
    return static_cast<uid_t>(_syscall_0(SYS_getuid));
}

} // namespace linux

#endif
