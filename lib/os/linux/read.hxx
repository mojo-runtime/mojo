#pragma once

#include <c/size_t.h>

#include "errno/EAGAIN.h"
#include "errno/EBADF.h"
#include "errno/EFAULT.h"
#include "errno/EINTR.h"
#include "errno/EINVAL.h"
#include "errno/EIO.h"
#include "errno/EISDIR.h"
#include "syscall/SYS_read.h"
#include "Result.hxx"

namespace os { inline namespace linux {

static inline
auto
read(int fd, void* buffer, size_t length) noexcept
{
    enum Error
    {
        _E(AGAIN),
        _E(BADF),
        _E(FAULT),
        _E(INTR),
        _E(INVAL),
        _E(IO),
        _E(ISDIR),
    };

    return Result<size_t, Error>(SYS_read, fd, buffer, length);
}

}}
