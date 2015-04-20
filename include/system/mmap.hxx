// -*- C++ -*-
#pragma once

#include "c/SYS_mmap.h"
#include "c/off_t.h"
#include "c/size_t.h"
#include "Result"

namespace system {

static inline
auto
mmap(void*  addr,
     size_t length,
     int    prot,
     int    flags,
     int    fd,
     off_t  offset) noexcept
{
#define _(name) _##name = name
    enum Error
    {
#if defined(__linux__) || defined(__FreeBSD__)
#  include "c/EACCES.h"
        _(EACCES),
#endif
#if defined(__linux__)
#  include "c/EAGAIN.h"
        _(EAGAIN),
#endif
#if defined(__linux__) || defined(__FreeBSD__)
#  include "c/EBADF.h"
#  include "c/EINVAL.h"
        _(EBADF),
        _(EINVAL),
#endif
#if defined(__linux__)
#  include "c/ENFILE.h"
        _(ENFILE),
#endif
#if defined(__linux__) || defined(__FreeBSD__)
#  include "c/ENODEV.h"
#  include "c/ENOMEM.h"
        _(ENODEV),
        _(ENOMEM),
#endif
#if defined(__linux__)
#  include "c/EOVERFLOW.h"
#  include "c/EPERM.h"
#  include "c/ETXTBSY.h"
        _(EOVERFLOW),
        _(EPERM),
        _(ETXTBSY),
#endif
    };
#undef _

    return Result<void*, Error>(SYS_mmap, addr, length, prot, flags, fd, offset);
}

}
