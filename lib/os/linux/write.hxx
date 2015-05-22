#pragma once

#include <c/size_t.h>

#include "errno/EAGAIN.h"
#include "errno/EBADF.h"
#include "errno/EDESTADDRREQ.h"
#include "errno/EDQUOT.h"
#include "errno/EFAULT.h"
#include "errno/EFBIG.h"
#include "errno/EINTR.h"
#include "errno/EINVAL.h"
#include "errno/EIO.h"
#include "errno/ENOSPC.h"
#include "errno/EPIPE.h"
#include "syscall/SYS_write.h"
#include "Result.hxx"

namespace os { inline namespace linux {

static inline
auto
write(int fd, const void* buffer, size_t length) noexcept
{
    enum Error
    {
        _E(AGAIN),
        _E(BADF),
        _E(DESTADDRREQ),
        _E(DQUOT),
        _E(FAULT),
        _E(FBIG),
        _E(INTR),
        _E(INVAL),
        _E(IO),
        _E(NOSPC),
        _E(PIPE),
    };

    return Result<size_t, Error>(SYS_write, fd, buffer, length);
}

}}
