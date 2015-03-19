#pragma once

#include <EFAULT>

namespace linux::uname {

enum Error
{
#define _(name) _##name = name
    _(EFAULT),
#undef _
};

}
