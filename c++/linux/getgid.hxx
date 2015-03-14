#pragma once

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
