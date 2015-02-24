#ifndef linux_exit_group_hxx_
#define linux_exit_group_hxx_

#include "c/SYS_exit_group.h"
#include "linux/__call1.hxx"

namespace linux {

[[noreturn]]
static inline
void
exit_group(int status) noexcept
{
    __call1(SYS_exit_group, status);
    __builtin_unreachable();
}

} // namespace linux

#endif
