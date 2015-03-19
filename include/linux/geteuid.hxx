#pragma once

#include <SYS_geteuid>
#include <uid_t>
#include "__call.hxx"

namespace linux {

static inline
gid_t
geteuid() noexcept
{
    return __call<SYS_geteuid>().ok<uid_t>();
}

}
