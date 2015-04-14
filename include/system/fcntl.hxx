#pragma once

#include "Result.hxx"

namespace system {

template <typename Arg>
static inline
auto
fcntl(int fd, int cmd, Arg arg) noexcept
{
#if defined(__linux__)
#  include "c/EACCES.h"
#  include "c/EAGAIN.h"
#  include "c/EBADF.h"
#  include "c/EDEADLK.h"
#  include "c/EFAULT.h"
#  include "c/EINTR.h"
#  include "c/EINVAL.h"
#  include "c/EMFILE.h"
#  include "c/ENOLCK.h"
#  include "c/EPERM.h"
#  define _(name) _##name = name

    enum Error
    {
        _(EACCES),
        _(EAGAIN),
        _(EBADF),
        _(EDEADLK),
        _(EFAULT),
        _(EINTR),
        _(EINVAL),
        _(EMFILE),
        _(ENOLCK),
        _(EPERM),
    };

#  undef _
#  include "c/SYS_fcntl.h"

    return Result<void, Error>(SYS_fcntl, fd, cmd, arg);

#else
#  error
#endif
}

}
