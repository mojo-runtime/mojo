#ifndef _linux_getegid_hxx_
#define _linux_getegid_hxx_

#include "c/SYS_getegid.h"
#include "c/gid_t.h"

#include "abi/syscall-0.hxx"

namespace linux {

static inline
gid_t
getegid() noexcept
{
    return static_cast<gid_t>(abi::syscall(SYS_getegid));
}

}

#endif
