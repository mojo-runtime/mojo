#ifndef linux_exit_group_hxx_
#define linux_exit_group_hxx_

#include "c/SYS_exit_group.h"
#include "c/_c_syscall1.h"

namespace linux {

[[noreturn]]
static inline
void
exit_group(int status) noexcept
{
    _c_syscall1(SYS_exit_group, status);
    __builtin_unreachable();
}

} // namespace linux

#endif
