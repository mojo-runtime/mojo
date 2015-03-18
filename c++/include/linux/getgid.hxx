#pragma once

#include "gid_t.h"

#include "__call.hxx"

namespace linux {

static inline
gid_t
getgid() noexcept
{
#if defined(__x86_64__)
    return __call<104>().ok<gid_t>();
#else
#  error
#endif
}

}
