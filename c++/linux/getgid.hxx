#pragma once

#include "SYS_getgid.h"
#include "gid_t.h"
#include "__syscall0.h"

namespace linux {

static inline
gid_t
getgid() noexcept
{
    return static_cast<gid_t>(__syscall0(SYS_getgid));
}

}
