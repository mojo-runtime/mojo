#pragma once

#include "c/SYS_getgid.h"
#include "c/gid_t.h"
#include "__call.hxx"

namespace linux {

static inline
gid_t
getgid() noexcept
{
    return __call<SYS_getgid>().ok<gid_t>();
}

}
