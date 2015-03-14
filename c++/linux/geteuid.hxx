#pragma once

#include "c/SYS_geteuid.h"
#include "c/uid_t.h"

#include "abi/syscall-0.hxx"

namespace linux {

static inline
uid_t
geteuid() noexcept
{
    return static_cast<uid_t>(abi::syscall(SYS_geteuid));
}

}
