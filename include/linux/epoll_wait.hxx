#pragma once

#include "c/EBADF.h"
#include "c/EFAULT.h"
#include "c/EINTR.h"
#include "c/EINVAL.h"

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
