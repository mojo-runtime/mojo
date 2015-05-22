#pragma once

#include "c/EACCES.h"
#include "c/EAGAIN.h"
#include "c/EBADF.h"
#include "c/EDEADLK.h"
#include "c/EFAULT.h"
#include "c/EINTR.h"
#include "c/EINVAL.h"
#include "c/EMFILE.h"
#include "c/ENOLCK.h"
#include "c/EPERM.h"
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
