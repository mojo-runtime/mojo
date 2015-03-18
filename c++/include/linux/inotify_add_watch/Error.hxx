#pragma once

#include "EACCES.h"
#include "EBADF.h"
#include "EFAULT.h"
#include "EINVAL.h"
#include "ENAMETOOLONG.h"
#include "ENOENT.h"
#include "ENOMEM.h"
#include "ENOSPC.h"

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
