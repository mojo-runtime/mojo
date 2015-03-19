#pragma once

#include "EACCES.h"
#include "EFAULT.h"
#include "EINVAL.h"
#include "EIO.h"
#include "ELOOP.h"
#include "ENAMETOOLONG.h"
#include "ENOENT.h"
#include "ENOMEM.h"
#include "ENOTDIR.h"

namespace linux::readlink {

enum Error
{
#define _(name) _##name = name
    _(EACCES),
    _(EFAULT),
    _(EINVAL),
    _(EIO),
    _(ELOOP),
    _(ENAMETOOLONG),
    _(ENOENT),
    _(ENOMEM),
    _(ENOTDIR),
#undef _
};

}
