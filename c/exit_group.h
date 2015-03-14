#pragma once

#if defined(__linux__)
#  include "SYS_exit_group.h"
#  include "__noreturn.h"
#  include "__nothrow.h"
#  include "__syscall1.h"
#  include "__unreachable.h"

__noreturn
__nothrow
static inline
void
exit_group(int status)
{
    __syscall1(SYS_exit_group, status);
    __unreachable();
}

#else
#  error
#endif
