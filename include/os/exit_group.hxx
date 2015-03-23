#pragma once

namespace os {

[[noreturn]]
static inline
void
exit_group(int status) noexcept
{
#if defined(__linux__)
#  include "c/SYS_exit_group.h"
#  include "c/__syscall_1_no_return.h"
    __syscall_1_no_return(SYS_exit_group, status);
#else
#  error
#endif
};

}
