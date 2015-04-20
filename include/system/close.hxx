// -*- C++ -*-
#pragma once

#include "c/SYS_close.h"
#include "Result"

namespace system {

static inline
auto
close(int fd) noexcept
{
#define _(name, doc) _##name = name
    enum Error
    {

#if defined(__FreeBSD__) || defined(__linux__)
#  include "c/EBADF.h"

        _(EBADF, "`fd` is not an active descriptor."),

#endif
#if defined(__FreeBSD__)
#  include "c/ECONNRESET.h"

        _(ECONNRESET, "The underlying object was a stream socket"
          " that was shut down by the peer before all pending data was delivered."),

#endif
#if defined(__FreeBSD__) || defined(__linux__)
#  include "c/EINTR.h"

        _(EINTR, "An interrupt was received."),

#endif
#if defined(__linux__)
#  include "c/EIO.h"

        _(EIO, "An I/O error occurred."),

#endif
#if defined(__FreeBSD__)
#  include "c/ENOSPC.h"

        _(ENOSPC, "The underlying object did not fit, cached data was lost."),

#endif
    };
#undef _

    return Result<void, Error>(SYS_close, fd);
}

}
