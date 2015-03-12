#ifndef _linux_getuid_hxx_
#define _linux_getuid_hxx_

#include "c/SYS_getuid.h"
#include "c/uid_t.h"

#include "__call-0.hxx"

namespace linux {

static inline
uid_t
getuid() noexcept
{
    return static_cast<uid_t>(__call(SYS_getuid));
}

}

#endif
