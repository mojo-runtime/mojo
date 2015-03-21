#pragma once

#include "c/SYS_getegid.h"
#include "c/gid_t.h"
#include "__call.hxx"

namespace linux {

static inline
gid_t
getegid() noexcept
{
    return __call<SYS_getegid>().ok<gid_t>();
}

}
