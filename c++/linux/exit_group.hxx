#pragma once

#include "SYS_exit_group.h"
#include "__syscall1.h"

namespace linux {

[[noreturn]]
static inline
void
exit_group(int status) noexcept
{
    __syscall1(SYS_exit_group, status);
    __builtin_unreachable();
}

}
