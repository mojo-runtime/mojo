#pragma once

#include "EBADF.h"
#include "EEXIST.h"
#include "EINVAL.h"
#include "ENOENT.h"
#include "ENOMEM.h"
#include "ENOSPC.h"
#include "EPERM.h"

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
