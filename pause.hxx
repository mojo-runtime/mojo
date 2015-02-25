#ifndef linux_pause_hxx_
#define linux_pause_hxx_

#include "SYS_pause.h"

#include "abi/_abi_syscall_0.h"

namespace linux {

static inline
void
pause() noexcept
{
    _abi_syscall_0(SYS_pause);
}

} // namespace linux

#endif
