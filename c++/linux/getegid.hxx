#pragma once

#include "SYS_getegid.h"
#include "gid_t.h"
#include "__syscall0.h"

namespace linux {

static inline
gid_t
getegid() noexcept
{
    return static_cast<gid_t>(__syscall0(SYS_getegid));
}

}
