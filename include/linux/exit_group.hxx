#ifndef linux_exit_group_hxx_
#define linux_exit_group_hxx_

#include "linux/_syscall_1.h"
#include "linux/SYS_exit_group.h"

namespace linux {

[[noreturn]]
static inline
void
exit_group(int status) noexcept
{
    _syscall_1(SYS_exit_group, status);
    __builtin_unreachable();
}

} // namespace linux

#endif
