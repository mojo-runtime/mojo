#pragma once

#include "c/EFAULT.h"
#include "c/EINVAL.h"

namespace linux::get_thread_area {

enum Error
{
#define _(name) _##name = name
    _(EFAULT),
    _(EINVAL),
#undef _
};

}
