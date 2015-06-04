#pragma once

#include <c/size_t.h>

#include "c/EAGAIN.h"
#include "c/EBADF.h"
#include "c/EBUSY.h"
#include "c/ECONNRESET.h"
#include "c/EFAULT.h"
#include "c/EINTR.h"
#include "c/EINVAL.h"
#include "c/EIO.h"
#include "c/EISDIR.h"
#include "c/EOPNOTSUPP.h"
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
