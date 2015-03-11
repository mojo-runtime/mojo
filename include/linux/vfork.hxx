#ifndef linux_vfork_hxx_
#define linux_vfork_hxx_

#include "c/SYS_vfork.h"

#include "fork.hxx"

namespace linux {

static inline
auto
vfork() noexcept
{
    return decltype(fork())(__call(SYS_vfork)); // Same Result
}

} // namespace linux

#endif
