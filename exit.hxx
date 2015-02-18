#ifndef linux_exit_hxx_
#define linux_exit_hxx_

#include "c/SYS_exit.h"
#include "c/_c_syscall1.h"

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
