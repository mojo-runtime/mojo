#ifndef linux_exit_group_hxx_
#define linux_exit_group_hxx_

#include "SYS_exit_group.h"

#include "abi/_abi_syscall_1.h"

namespace linux {

[[noreturn]]
static inline
void
exit_group(int status) noexcept
{
    _abi_syscall_1(SYS_exit_group, status);
    __builtin_unreachable();
}

} // namespace linux

#endif
