#pragma once

#include "EBADF.h"
#include "EFAULT.h"
#include "EINTR.h"
#include "EINVAL.h"

namespace linux::epoll_wait {

enum Error
{
#define _(name) _##name = name
    _(EBADF),
    _(EFAULT),
    _(EINTR),
    _(EINVAL),
#undef _
};

}
