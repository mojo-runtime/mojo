#pragma once

#if defined(__unix__)
#  include "SYS_exit.h"
#  include "abi/__syscall_1_no_return.h"
#  include "compat/__static_cast.h"

__noreturn
static inline
void
_Exit(int status) __noexcept
{
    __syscall_1_no_return(SYS_exit, __static_cast(__Word, status));
}

#else
#  error
#endif
