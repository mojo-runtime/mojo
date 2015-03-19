#pragma once

#include "EINVAL.h"
#include "EPERM.h"
#include "ESRCH.h"

namespace linux::tgkill {

enum Error
{
#define _(name) _##name = name
    _(EINVAL),
    _(EPERM),
    _(ESRCH),
#undef _
};

}
