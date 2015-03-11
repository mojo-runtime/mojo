#ifndef _os_linux_geteuid_hxx_
#define _os_linux_geteuid_hxx_

#include "c/SYS_geteuid.h"
#include "c/uid_t.h"

#include "__call-0.hxx"

namespace os { inline namespace _linux_ {

static inline
uid_t
geteuid() noexcept
{
    return static_cast<uid_t>(__call(SYS_geteuid));
}

}}

#endif
