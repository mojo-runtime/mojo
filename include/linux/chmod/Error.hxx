#pragma once

#include "EACCES.h"
#include "EFAULT.h"
#include "EIO.h"
#include "ELOOP.h"
#include "ENAMETOOLONG.h"
#include "ENOENT.h"
#include "ENOMEM.h"
#include "ENOTDIR.h"
#include "EPERM.h"
#include "EROFS.h"

namespace linux::chmod {

enum Error
{
#define _(name) _##name = name
    _(EACCES),
    _(EFAULT),
    _(EIO),
    _(ELOOP),
    _(ENAMETOOLONG),
    _(ENOENT),
    _(ENOMEM),
    _(ENOTDIR),
    _(EPERM),
    _(EROFS),
#undef _
};

}
