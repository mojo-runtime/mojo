#ifndef linux_exit_hxx_
#define linux_exit_hxx_

#include "linux/_c_syscall1.h"
#include "linux/SYS_exit.h"

namespace linux {

[[noreturn]]
static inline
void
exit(int status) noexcept
{
    _c_syscall1(SYS_exit, status);
    __builtin_unreachable();
}

} // namespace linux

#endif
