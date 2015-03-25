#pragma once

#if defined(__unix__)
#  include "SYS_exit.h"
#  include "__static_cast.h"
#  include "__syscall_1_no_return.h"

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
