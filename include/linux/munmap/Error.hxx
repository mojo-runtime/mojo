#pragma once

#include <EINVAL>

namespace linux::munmap {

enum Error
{
#define _(name) _##name = name
    _(EINVAL),
#undef _
};

}
