#pragma once

#include "EACCES.h"
#include "EBUSY.h"
#include "EFAULT.h"
#include "EINVAL.h"
#include "ELOOP.h"
#include "ENAMETOOLONG.h"
#include "ENOENT.h"
#include "ENOMEM.h"
#include "ENOTDIR.h"
#include "ENOTEMPTY.h"
#include "EPERM.h"
#include "EROFS.h"

namespace linux::rmdir {

enum Error
{
#define _(name) _##name = name
    _(EACCES),
    _(EBUSY),
    _(EFAULT),
    _(EINVAL),
    _(ELOOP),
    _(ENAMETOOLONG),
    _(ENOENT),
    _(ENOMEM),
    _(ENOTDIR),
    _(ENOTEMPTY),
    _(EPERM),
    _(EROFS),
#undef _
};

}
