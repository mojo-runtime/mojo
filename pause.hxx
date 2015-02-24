#ifndef linux_pause_hxx_
#define linux_pause_hxx_

#include "SYS_pause.h"

#include "_internal/_c_syscall0.h"

namespace linux {

static inline
void
pause() noexcept
{
    _c_syscall0(SYS_pause);
}

} // namespace linux

#endif
