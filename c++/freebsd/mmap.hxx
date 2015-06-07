#pragma once

#include <c/size_t.h>
#include "c/EACCES.h"
#include "c/EBADF.h"
#include "c/EINVAL.h"
#include "c/ENODEV.h"
#include "c/ENOMEM.h"
#include "c/off_t.h"
#include "Result.hxx"

#define __NR_mmap 477

namespace os { inline namespace freebsd {

static inline
auto
mmap(void* addr, size_t length, int prot, int flags, int fd, off_t offset) noexcept
{
    enum Error
    {
        _E(ACCES),
        _E(BADF),
        _E(INVAL),
        _E(NODEV),
        _E(NOMEM),
    };

    return Result<void*, Error>(__NR_mmap, addr, length, prot, flags, fd, offset);
}

}}
