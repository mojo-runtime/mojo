#ifndef linux_getuid_hxx_
#define linux_getuid_hxx_

#include "linux/_c_syscall0.h"
#include "linux/SYS_getuid.h"
#include "linux/uid_t.h"

namespace linux {

static inline
uid_t
getuid() noexcept
{
    return static_cast<uid_t>(_c_syscall0(SYS_getuid));
}

} // namespace linux

#endif
