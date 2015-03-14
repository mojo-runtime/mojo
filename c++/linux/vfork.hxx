#pragma once

#include "SYS_vfork.h"

#include "fork.hxx"

namespace linux {

static inline
auto
vfork() noexcept
{
    return decltype(fork())(abi::syscall(SYS_vfork)); // Same Result
}

}
