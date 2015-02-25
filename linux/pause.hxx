#ifndef linux_pause_hxx_
#define linux_pause_hxx_

#include "linux/c/_c_syscall0.h"
#include "linux/c/SYS_pause.h"

namespace linux {

static inline
void
pause() noexcept
{
    _c_syscall0(SYS_pause);
}

} // namespace linux

#endif
