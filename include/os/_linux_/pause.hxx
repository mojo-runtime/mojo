#ifndef _os_linux_pause_hxx_
#define _os_linux_pause_hxx_

#include "c/SYS_pause.h"

#include "__call-0.hxx"

namespace os { inline namespace _linux_ {

static inline
void
pause() noexcept
{
    __call(SYS_pause);
}

}}

#endif
