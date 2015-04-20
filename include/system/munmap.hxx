// -*- C++ -*-
#pragma once

#include "c/SYS_munmap.h"
#include "c/size_t.h"
#include "Result.hxx"

namespace system {

static inline
auto
munmap(void* addr, size_t length) noexcept
{
#define _(name) _##name = name
    enum Error
    {
#if defined(__linux__) || defined(__FreeBSD__)
#  include "c/EINVAL.h"
        _(EINVAL),
#endif
    };
#undef _

    return Result<void, Error>(SYS_munmap, addr, length);
}

}
