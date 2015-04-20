#pragma once

#include "c/SYS_fcntl.h"
#include "Result.hxx"

namespace system {

template <typename Arg>
static inline
auto
fcntl(int fd, int cmd, Arg arg) noexcept
{
#define _(name) _##name = name
    enum Error
    {
#if defined(__linux__)
#  include "c/EACCES.h"
        _(EACCES),
#endif
#if defined(__linux__) || defined(__FreeBSD__)
#  include "c/EAGAIN.h"
#  include "c/EBADF.h"
#  include "c/EDEADLK.h"
        _(EAGAIN),
        _(EBADF),
        _(EDEADLK),
#endif
#if defined(__linux__)
#  include "c/EFAULT.h"
        _(EFAULT),
#endif
#if defined(__linux__) || defined(__FreeBSD__)
#  include "c/EINTR.h"
#  include "c/EINVAL.h"
#  include "c/EMFILE.h"
#  include "c/ENOLCK.h"
        _(EINTR),
        _(EINVAL),
        _(EMFILE),
        _(ENOLCK),
#endif
#if defined(__FreeBSD__)
#  include "c/EOPNOTSUPP.h"
#  include "c/EOVERFLOW.h"
        _(EOPNOTSUPP),
        _(EOVERFLOW),
#endif
#if defined(__linux__) || defined(__FreeBSD__)
#  include "c/EPERM.h"
        _(EPERM),
#endif
#if defined(__FreeBSD__)
#  include "c/ESRCH.h"
        _(ESRCH),
#endif
    };
#undef _

    return Result<void, Error>(SYS_fcntl, fd, cmd, arg);
}

}
