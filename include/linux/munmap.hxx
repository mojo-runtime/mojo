#pragma once

#include "c/EINVAL.h"

namespace linux::munmap {

enum Error
{
#define _(name) _##name = name
    _(EINVAL),
#undef _
};

}
