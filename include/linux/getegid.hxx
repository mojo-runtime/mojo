#pragma once

#include <gid_t>

#include "__call.hxx"

namespace linux {

static inline
gid_t
getegid() noexcept
{
#if defined(__x86_64__)
    return __call<108>().ok<gid_t>();
#else
#  error
#endif
}

}
