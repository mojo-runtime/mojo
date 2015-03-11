#ifndef _os_linux_getegid_hxx_
#define _os_linux_getegid_hxx_

#include "c/SYS_getegid.h"
#include "c/gid_t.h"

#include "__call-0.hxx"

namespace os { inline namespace _linux_ {

static inline
gid_t
getegid() noexcept
{
    return static_cast<gid_t>(__call(SYS_getegid));
}

}}

#endif
