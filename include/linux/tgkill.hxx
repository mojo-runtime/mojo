#pragma once

#include <EINVAL>
#include <EPERM>
#include <ESRCH>

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
