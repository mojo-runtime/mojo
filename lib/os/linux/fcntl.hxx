#pragma once

#include "errno/EACCES.h"
#include "errno/EAGAIN.h"
#include "errno/EBADF.h"
#include "errno/EDEADLK.h"
#include "errno/EFAULT.h"
#include "errno/EINTR.h"
#include "errno/EINVAL.h"
#include "errno/EMFILE.h"
#include "errno/ENOLCK.h"
#include "errno/EPERM.h"
#include "syscall/SYS_fcntl.h"
#include "Result.hxx"

namespace os { inline namespace linux {

template <typename Arg>
static inline
auto
fcntl(int fd, int cmd, Arg arg) noexcept
{
    enum Error
    {
        _E(ACCES),
        _E(AGAIN),
        _E(BADF),
        _E(DEADLK),
        _E(FAULT),
        _E(INTR),
        _E(INVAL),
        _E(MFILE),
        _E(NOLCK),
        _E(PERM),
    };

    return Result<void, Error>(SYS_fcntl, fd, cmd, arg);
}

}}
