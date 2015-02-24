#ifndef linux_gettid_hxx_
#define linux_gettid_hxx_

#include "SYS_gettid.h"
#include "pid_t.h"

#include "_internal/_c_syscall0.h"

namespace linux {

static inline
pid_t
gettid() noexcept
{
    return static_cast<pid_t>(_c_syscall0(SYS_gettid));
}

} // namespace linux

#endif
