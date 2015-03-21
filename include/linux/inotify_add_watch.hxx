#pragma once

#include "c/EACCES.h"
#include "c/EBADF.h"
#include "c/EFAULT.h"
#include "c/EINVAL.h"
#include "c/ENAMETOOLONG.h"
#include "c/ENOENT.h"
#include "c/ENOMEM.h"
#include "c/ENOSPC.h"

namespace linux::inotify_add_watch {

enum Error
{
#define _(name) _##name = name
    _(EACCES),
    _(EBADF),
    _(EFAULT),
    _(EINVAL),
    _(ENAMETOOLONG),
    _(ENOENT),
    _(ENOMEM),
    _(ENOSPC),
#undef _
};

}
