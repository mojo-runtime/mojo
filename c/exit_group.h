#pragma once

#if defined(__linux__)
#  include "compat/__noexcept.h"
#  include "compat/__noreturn.h"
#  include "compat/__builtin_unreachable.h"
#  include "SYS_exit_group.h"
#  include "__syscall1.h"

__noreturn
static inline
void
exit_group(int status) __noexcept
{
    __syscall1(SYS_exit_group, status);
    __builtin_unreachable();
}

#else
#  error
#endif
