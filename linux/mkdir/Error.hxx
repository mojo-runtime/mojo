#pragma once

#include "EACCES.h"
#include "EDQUOT.h"
#include "EEXIST.h"
#include "EFAULT.h"
#include "ELOOP.h"
#include "EMLINK.h"
#include "ENAMETOOLONG.h"
#include "ENOENT.h"
#include "ENOMEM.h"
#include "ENOSPC.h"
#include "ENOTDIR.h"
#include "EPERM.h"
#include "EROFS.h"

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
