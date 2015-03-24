#pragma once

#include "compat/__noexcept.h"
#include "compat/__noreturn.h"

__noreturn
static inline
void
_Exit(int status) __noexcept
{
#if defined(__unix__)
#  include "SYS_exit.h"
#  include "__syscall_1_no_return.h"
    __syscall_1_no_return(SYS_exit, status);
#else
#  error
#endif
    __builtin_unreachable();
};
