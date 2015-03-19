#pragma once

#include <SYS_getgid>
#include <gid_t>
#include "__call.hxx"

namespace linux {

static inline
gid_t
getgid() noexcept
{
    return __call<SYS_getgid>().ok<gid_t>();
}

}