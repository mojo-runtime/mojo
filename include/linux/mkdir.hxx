#pragma once

#include "c/EACCES.h"
#include "c/EDQUOT.h"
#include "c/EEXIST.h"
#include "c/EFAULT.h"
#include "c/ELOOP.h"
#include "c/EMLINK.h"
#include "c/ENAMETOOLONG.h"
#include "c/ENOENT.h"
#include "c/ENOMEM.h"
#include "c/ENOSPC.h"
#include "c/ENOTDIR.h"
#include "c/EPERM.h"
#include "c/EROFS.h"

namespace linux::mkdir {

enum Error
{
#define _(name) _##name = name
    _(EACCES),
    _(EDQUOT),
    _(EEXIST),
    _(EFAULT),
    _(ELOOP),
    _(EMLINK),
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
