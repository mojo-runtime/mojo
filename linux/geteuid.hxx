#pragma once

#include "c/uid_t.h"

#include "__call.hxx"

namespace linux {

static inline
gid_t
geteuid() noexcept
{
#if defined(__x86_64__)
    return __call<107>().ok<uid_t>();
#else
#  error
#endif
}

}
