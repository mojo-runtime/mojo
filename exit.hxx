#ifndef linux_exit_hxx_
#define linux_exit_hxx_

#include "c/SYS_exit.h"
#include "linux/__call1.hxx"

namespace linux {

[[noreturn]]
static inline
void
exit(int status) noexcept
{
    __call1(SYS_exit, status);
    __builtin_unreachable();
}

} // namespace linux

#endif
