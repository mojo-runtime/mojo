#pragma once

#include "EFAULT.h"
#include "EINVAL.h"
#include "EPERM.h"

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
