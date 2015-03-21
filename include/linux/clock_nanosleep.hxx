#pragma once

#include "c/EFAULT.h"
#include "c/EINTR.h"
#include "c/EINVAL.h"

namespace linux::clock_nanosleep {

enum Error
{
#define _(name) _##name = name
    _(EFAULT),
    _(EINTR),
    _(EINVAL),
#undef _
};

}
