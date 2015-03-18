#pragma once

#include "EFAULT.h"
#include "EINTR.h"
#include "EINVAL.h"

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
