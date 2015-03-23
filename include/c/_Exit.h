#pragma once

__attribute__((__noreturn__, __nothrow__))
static inline
void
_Exit(int status)
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
