#pragma once

#include "EBADF.h"
#include "EFAULT.h"
#include "EINVAL.h"
#include "ENOTTY.h"

namespace linux::ioctl {

enum Error
{
#define _(name) _##name = name
    _(EBADF),
    _(EFAULT),
    _(EINVAL),
    _(ENOTTY),
#undef _
};

}
