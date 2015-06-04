#pragma once

#include "errno/EAGAIN.h"
#include "errno/EBADF.h"
#include "errno/EDEADLK.h"
#include "errno/EINTR.h"
#include "errno/EINVAL.h"
#include "errno/EMFILE.h"
#include "errno/ENOLCK.h"
#include "errno/EOPNOTSUPP.h"
#include "errno/EOVERFLOW.h"
#include "errno/EPERM.h"
#include "errno/ESRCH.h"
#include "Result.hxx"

#define __NR_fcntl 92

namespace os { inline namespace freebsd {

template <typename Arg>
static inline
auto
fcntl(int fd, int cmd, Arg arg) noexcept
{
    enum Error
    {
        _E(AGAIN),
        _E(BADF),
        _E(DEADLK),
        _E(INTR),
        _E(INVAL),
        _E(MFILE),
        _E(NOLCK),
        _E(OPNOTSUPP),
        _E(OVERFLOW),
        _E(PERM),
        _E(SRCH),
    };

    return Result<void, Error>(__NR_fcntl, fd, cmd, arg);
}

}}
