#ifndef linux_getuid_hxx_
#define linux_getuid_hxx_

#include "linux/c/_linux_syscall0.h"
#include "linux/c/SYS_getuid.h"
#include "linux/c/uid_t.h"

namespace linux {

static inline
uid_t
getuid() noexcept
{
    return static_cast<uid_t>(_linux_syscall0(SYS_getuid));
}

} // namespace linux

#endif
