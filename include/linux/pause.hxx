#ifndef linux_pause_hxx_
#define linux_pause_hxx_

#include "linux/_syscall_0.h"
#include "linux/SYS_pause.h"

namespace linux {

static inline
void
pause() noexcept
{
    _syscall_0(SYS_pause);
}

} // namespace linux

#endif
