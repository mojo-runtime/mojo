#ifndef linux_getpid_hxx_
#define linux_getpid_hxx_

#include "c/SYS_getpid.h"
#include "c/pid_t.h"

#include "__call-0.hxx"

namespace linux {

static inline
pid_t
getpid() noexcept
{
    return static_cast<pid_t>(__call(SYS_getpid));
}

} // namespace linux

#endif
