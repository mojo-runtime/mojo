#pragma once

#include <EBADF>
#include <EFAULT>
#include <EINTR>
#include <EINVAL>

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
