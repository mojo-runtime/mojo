#pragma once

#include "SYS_getgid.h"
#include "gid_t.h"

#include "abi/syscall-0.hxx"

namespace linux {

static inline
gid_t
getgid() noexcept
{
    return static_cast<gid_t>(abi::syscall(SYS_getgid));
}

}
