#pragma once

namespace os {

[[noreturn]]
static inline
void
exit(int status) noexcept
{
#if defined(__unix__)
#  include "c/SYS_exit.h"
#  include "c/__syscall_1_no_return.h"
    __syscall_1_no_return(SYS_exit, status);
#else
#  error
#endif
};

}
