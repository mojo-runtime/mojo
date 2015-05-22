#pragma once

#include "c/EAGAIN.h"
#include "c/EBADF.h"
#include "c/EDEADLK.h"
#include "c/EINTR.h"
#include "c/EINVAL.h"
#include "c/EMFILE.h"
#include "c/ENOLCK.h"
#include "c/EOPNOTSUPP.h"
#include "c/EOVERFLOW.h"
#include "c/EPERM.h"
#include "c/ESRCH.h"
#include "syscall/SYS_fcntl.h"
#include "Result.hxx"

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

    return Result<void, Error>(SYS_fcntl, fd, cmd, arg);
}

}}
