#pragma once

//--------------------------------------------------------------------------------------------------

#if defined(__linux__)

#include "c/EINVAL.h"
#include "c/EMFILE.h"
#include "c/ENFILE.h"
#include "c/ENOMEM.h"
#include "c/SYS_epoll_create1.h"

namespace os {

static inline
auto
epoll_create1(int flags) noexcept
{
    enum Error
    {
#define _(name) _##name = name
        _(EINVAL),
        _(EMFILE),
        _(ENFILE),
        _(ENOMEM),
#undef _
    };

    return Result<int, Error>(SYS_epoll_create1, flags);
}

}

//--------------------------------------------------------------------------------------------------

#else
#  error
#endif
