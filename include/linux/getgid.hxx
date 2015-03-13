#ifndef _linux_getgid_hxx_
#define _linux_getgid_hxx_

#include "c/SYS_getgid.h"
#include "c/gid_t.h"

#include "abi/syscall-0.hxx"

namespace linux {

static inline
gid_t
getgid() noexcept
{
    return static_cast<gid_t>(abi::syscall(SYS_getgid));
}

}

#endif
