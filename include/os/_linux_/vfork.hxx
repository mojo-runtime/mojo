#ifndef _os_linux_vfork_hxx_
#define _os_linux_vfork_hxx_

#include "c/SYS_vfork.h"

#include "fork.hxx"

namespace os { inline namespace _linux_ {

static inline
auto
vfork() noexcept
{
    return decltype(fork())(__call(SYS_vfork)); // Same Result
}

}}

#endif
