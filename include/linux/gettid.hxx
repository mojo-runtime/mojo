#ifndef linux_gettid_hxx_
#define linux_gettid_hxx_

#include "linux/_syscall_0.h"
#include "linux/SYS_gettid.h"
#include "linux/pid_t.h"

namespace linux {

static inline
pid_t
gettid() noexcept
{
    return static_cast<pid_t>(_syscall_0(SYS_gettid));
}

} // namespace linux

#endif
