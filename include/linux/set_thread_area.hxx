#pragma once

#include <EFAULT>
#include <EINVAL>
#include <ESRCH>

namespace linux::set_thread_area {

enum Error
{
#define _(name) _##name = name
    _(EFAULT),
    _(EINVAL),
    _(ESRCH),
#undef _
};

}
