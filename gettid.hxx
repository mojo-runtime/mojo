#ifndef linux_gettid_hxx_
#define linux_gettid_hxx_

#include "c/SYS_gettid.h"
#include "c/pid_t.h"
#include "c/extension/x_syscall0.h"

namespace linux {

static inline
pid_t
gettid() noexcept
{
    return static_cast<pid_t>(x_syscall0(SYS_gettid));
}

} // namespace linux

#endif
