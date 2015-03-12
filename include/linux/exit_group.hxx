#ifndef _linux_exit_group_hxx_
#define _linux_exit_group_hxx_

#include "c/SYS_exit_group.h"

#include "__call-1.hxx"

namespace linux {

[[noreturn]]
static inline
void
exit_group(int status) noexcept
{
    __call(SYS_exit_group, status);
    __builtin_unreachable();
}

}

#endif
