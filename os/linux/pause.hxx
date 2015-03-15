#pragma once

#include "SYS_pause.h"
#include "__syscall0.h"

namespace linux {

static inline
void
pause() noexcept
{
    __syscall0(SYS_pause);
}

}
