#ifndef _linux_pause_hxx_
#define _linux_pause_hxx_

#include "c/SYS_pause.h"

#include "__call-0.hxx"

namespace linux {

static inline
void
pause() noexcept
{
    __call(SYS_pause);
}

}

#endif
