#pragma once

#include "c/SYS_getegid.h"
#include "c/gid_t.h"
#include "__call.hxx"

namespace linux {

static inline
gid_t
getegid() noexcept
{
    return static_cast<gid_t>(__call<SYS_getegid>());
}

}
