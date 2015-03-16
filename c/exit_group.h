#pragma once

#if defined(__linux__)
#  include "compat/__noreturn.h"
#  include "compat/__nothrow.h"
#  include "compat/__unreachable.h"
#  include "SYS_exit_group.h"
#  include "__syscall1.h"

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
