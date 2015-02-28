#ifndef linux_geteuid_hxx_
#define linux_geteuid_hxx_

#include "linux/SYS_geteuid.h"
#include "linux/uid_t.h"

#include "linux/_c_syscall0.h"

namespace linux {

static inline
uid_t
geteuid() noexcept
{
    return static_cast<uid_t>(_c_syscall0(SYS_geteuid));
}

} // namespace linux

#endif
