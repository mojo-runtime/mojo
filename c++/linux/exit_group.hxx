#pragma once

#include "c/SYS_exit_group.h"

#include "abi/syscall-1.hxx"

namespace linux {

[[noreturn]]
static inline
void
exit_group(int status) noexcept
{
    abi::syscall(SYS_exit_group, status);
    __builtin_unreachable();
}

}
