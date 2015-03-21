#pragma once

#include "c/EFAULT.h"
#include "c/EINVAL.h"
#include "c/ESRCH.h"

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
