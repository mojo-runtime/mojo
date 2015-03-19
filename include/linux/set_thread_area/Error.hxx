#pragma once

#include "EFAULT.h"
#include "EINVAL.h"
#include "ESRCH.h"

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
