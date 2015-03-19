#pragma once

#include <EFAULT>
#include <EINVAL>

namespace linux::clock_getres {

enum Error
{
#define _(name) _##name = name
    _(EFAULT),
    _(EINVAL),
#undef _
};

}
