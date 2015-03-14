#pragma once

#include "c/SYS_exit.h"

#include "abi/syscall-1.hxx"

namespace linux {

[[noreturn]]
static inline
void
exit(int status) noexcept
{
    abi::syscall(SYS_exit, status);
    __builtin_unreachable();
}

}
