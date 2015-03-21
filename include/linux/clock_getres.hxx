#pragma once

#include "c/EFAULT.h"
#include "c/EINVAL.h"

namespace linux::clock_getres {

enum Error
{
#define _(name) _##name = name
    _(EFAULT),
    _(EINVAL),
#undef _
};

}
