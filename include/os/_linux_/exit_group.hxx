#ifndef _os_linux_exit_group_hxx_
#define _os_linux_exit_group_hxx_

#include "c/SYS_exit_group.h"

#include "__call-1.hxx"

namespace os { inline namespace _linux_ {

[[noreturn]]
static inline
void
exit_group(int status) noexcept
{
    __call(SYS_exit_group, status);
    __builtin_unreachable();
}

}}

#endif
