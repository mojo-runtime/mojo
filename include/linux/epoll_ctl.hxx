#pragma once

#include "c/EBADF.h"
#include "c/EEXIST.h"
#include "c/EINVAL.h"
#include "c/ENOENT.h"
#include "c/ENOMEM.h"
#include "c/ENOSPC.h"
#include "c/EPERM.h"

namespace linux::epoll_ctl {

enum Error
{
#define _(name) _##name = name
    _(EBADF),
    _(EEXIST),
    _(EINVAL),
    _(ENOENT),
    _(ENOMEM),
    _(ENOSPC),
    _(EPERM),
#undef _
};

}
