#ifndef linux_geteuid_hxx_
#define linux_geteuid_hxx_

#include "c/SYS_geteuid.h"
#include "c/uid_t.h"
#include "c/extension/x_syscall0.h"

namespace linux {

static inline
uid_t
geteuid() noexcept
{
    return static_cast<uid_t>(x_syscall0(SYS_geteuid));
}

} // namespace linux

#endif
