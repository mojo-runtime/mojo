#pragma once

#include <EFAULT>
#include <EINVAL>
#include <EPERM>

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
