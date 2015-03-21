#pragma once

#include "c/EBADF.h"
#include "c/EINVAL.h"

namespace linux::inotify_rm_watch {

enum Error
{
#define _(name) _##name = name
    _(EBADF),
    _(EINVAL),
#undef _
};

}
