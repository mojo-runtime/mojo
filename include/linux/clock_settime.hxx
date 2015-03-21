#pragma once

#include "c/EFAULT.h"
#include "c/EINVAL.h"
#include "c/EPERM.h"

namespace linux::clock_settime {

enum Error
{
#define _(name) _##name = name
    _(EFAULT),
    _(EINVAL),
    _(EPERM),
#undef _
};

}
