#pragma once

#include <SYS_getuid>
#include <uid_t>
#include "__call.hxx"

namespace linux {

static inline
uid_t
getuid() noexcept
{
    return __call<SYS_getuid>().ok<uid_t>();
}

}
