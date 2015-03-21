#pragma once

#include "c/EINVAL.h"
#include "c/EPERM.h"
#include "c/ESRCH.h"

namespace linux::kill {

enum Error
{
#define _(name) _##name = name
    _(EINVAL),
    _(EPERM),
    _(ESRCH),
#undef _
};

}
