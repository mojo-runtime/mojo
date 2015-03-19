#pragma once

#include "EACCES.h"
#include "EDQUOT.h"
#include "EEXIST.h"
#include "EFAULT.h"
#include "EIO.h"
#include "ELOOP.h"
#include "ENAMETOOLONG.h"
#include "ENOENT.h"
#include "ENOMEM.h"
#include "ENOSPC.h"
#include "ENOTDIR.h"
#include "EPERM.h"
#include "EROFS.h"

namespace linux::symlink {

enum Error
{
#define _(name) _##name = name
    _(EACCES),
    _(EDQUOT),
    _(EEXIST),
    _(EFAULT),
    _(EIO),
    _(ELOOP),
    _(ENAMETOOLONG),
    _(ENOENT),
    _(ENOMEM),
    _(ENOSPC),
    _(ENOTDIR),
    _(EPERM),
    _(EROFS),
#undef _
};

}
