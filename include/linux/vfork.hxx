#ifndef _linux_vfork_hxx_
#define _linux_vfork_hxx_

#include "c/SYS_vfork.h"

#include "fork.hxx"

namespace linux {

static inline
auto
vfork() noexcept
{
    return decltype(fork())(abi::syscall(SYS_vfork)); // Same Result
}

}

#endif
