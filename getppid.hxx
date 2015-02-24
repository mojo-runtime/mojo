#ifndef linux_getppid_hxx_
#define linux_getppid_hxx_

#include "SYS_getppid.h"
#include "pid_t.h"

#include "linux/__call0.hxx"

namespace linux {

static inline
pid_t
getppid() noexcept
{
    return static_cast<pid_t>(__call0(SYS_getppid));
}

} // namespace linux

#endif
