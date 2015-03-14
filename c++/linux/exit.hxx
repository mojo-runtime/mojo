#pragma once

#include "SYS_exit.h"
#include "__syscall1.h"

namespace linux {

[[noreturn]]
static inline
void
exit(int status) noexcept
{
    __syscall1(SYS_exit, status);
    __builtin_unreachable();
}

}
