#pragma once

//--------------------------------------------------------------------------------------------------

#if defined(__linux__)

#include "c/EBADF.h"
#include "c/EBUSY.h"
#include "c/EINTR.h"
#include "c/EINVAL.h"
#include "c/EMFILE.h"
#include "c/SYS_dup3.h"

#include "Result.hxx"

namespace os {

static inline
auto
dup3(int oldfd, int newfd, int flags) noexcept
{
    enum Error
    {
#define _(name) _##name = name
        _(EBADF),
        _(EBUSY),
    _(EINTR),
        _(EINVAL),
        _(EMFILE),
#undef _
    };

    return Result<int, Error>(SYS_dup3, oldfd, newfd, flags);
}

}

//--------------------------------------------------------------------------------------------------

#else
#  error
#endif
