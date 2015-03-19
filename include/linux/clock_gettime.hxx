#pragma once

#include <EFAULT>
#include <EINVAL>

namespace linux::clock_gettime {

enum Error
{
#define _(name) _##name = name
    _(EFAULT),
    _(EINVAL),
#undef _
};

}
