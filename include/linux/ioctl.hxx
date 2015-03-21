#pragma once

#include "c/EBADF.h"
#include "c/EFAULT.h"
#include "c/EINVAL.h"
#include "c/ENOTTY.h"

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
