#pragma once

#include <SYS_getegid>
#include <gid_t>
#include "__call.hxx"

namespace linux {

static inline
gid_t
getegid() noexcept
{
    return __call<SYS_getegid>().ok<gid_t>();
}

}
