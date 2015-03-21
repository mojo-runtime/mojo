#pragma once

#include "c/EFAULT.h"
#include "c/EINVAL.h"

namespace linux::clock_gettime {

enum Error
{
#define _(name) _##name = name
    _(EFAULT),
    _(EINVAL),
#undef _
};

}
