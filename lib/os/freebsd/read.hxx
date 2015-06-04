#pragma once

#include <c/size_t.h>

#include "errno/EAGAIN.h"
#include "errno/EBADF.h"
#include "errno/EBUSY.h"
#include "errno/ECONNRESET.h"
#include "errno/EFAULT.h"
#include "errno/EINTR.h"
#include "errno/EINVAL.h"
#include "errno/EIO.h"
#include "errno/EISDIR.h"
#include "errno/EOPNOTSUPP.h"
#include "Result.hxx"

#define __NR_read 3

namespace os { inline namespace freebsd {

static inline
auto
read(int fd, void* buffer, size_t length) noexcept
{
    enum Error
    {
        _E(AGAIN),
        _E(BADF),
        _E(BUSY),
        _E(CONNRESET),
        _E(FAULT),
        _E(INTR),
        _E(INVAL),
        _E(IO),
        _E(ISDIR),
        _E(OPNOTSUPP),
    };

    return Result<size_t, Error>(__NR_read, fd, buffer, length);
}

}}
