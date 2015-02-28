#ifndef linux_vfork_hxx_
#define linux_vfork_hxx_

#include "linux/SYS_vfork.h"

#include "linux/fork.hxx"

namespace linux {

static inline
auto
vfork() noexcept
{
    return decltype(fork())(_c_syscall0(SYS_vfork)); // Same Result
}

} // namespace linux

#endif
