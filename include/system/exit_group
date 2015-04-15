// -*- C++ -*-
#pragma once

#if defined(__linux__)
#  include "c/SYS_exit_group.h"
#  include "abi/__syscall_1_no_return.h"

namespace system {

[[noreturn]]
static inline
void
exit_group(int status) noexcept
{
    __syscall_1_no_return(SYS_exit_group, static_cast<__Word>(status));
};

}

#else
#  error
#endif
