#ifndef _os_linux_gettid_hxx_
#define _os_linux_gettid_hxx_

#include "c/SYS_gettid.h"
#include "c/pid_t.h"

#include "__call-0.hxx"

namespace os { inline namespace _linux_ {

static inline
pid_t
gettid() noexcept
{
    return static_cast<pid_t>(__call(SYS_gettid));
}

}}

#endif
