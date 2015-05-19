#pragma once

#include <c/SYS_pipe2.h>
#include "Result.hxx"

namespace os {

static inline
auto
pipe2(int pipefd[2], int flags) noexcept
{
#define _(name) _##name = name
    enum Error
    {
#if defined(__linux__)
#  include <c/EFAULT.h>
        _(EFAULT),
#endif
#if defined(__linux__) || defined(__FreeBSD__)
#  include <c/EINVAL.h>
#  include <c/EMFILE.h>
#  include <c/ENFILE.h>
        _(EINVAL),
        _(EMFILE),
        _(ENFILE),
#endif
#if defined(__FreeBSD__)
#  include <c/ENOMEM.h>
        _(ENOMEM),
#endif
    };
#undef _

    return Result<void, Error>(SYS_pipe2, pipefd, flags);
}

}
