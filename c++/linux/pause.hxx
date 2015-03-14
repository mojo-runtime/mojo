#pragma once

#include "c/SYS_pause.h"

#include "abi/syscall-0.hxx"

namespace linux {

static inline
void
pause() noexcept
{
    abi::syscall(SYS_pause);
}

}
