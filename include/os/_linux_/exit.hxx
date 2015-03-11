#ifndef _os_linux_exit_hxx_
#define _os_linux_exit_hxx_

#include "c/SYS_exit.h"

#include "__call-1.hxx"

namespace os { inline namespace _linux_ {

[[noreturn]]
static inline
void
exit(int status) noexcept
{
    __call(SYS_exit, status);
    __builtin_unreachable();
}

}}

#endif
