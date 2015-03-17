#pragma once

#include "EACCES.h"
#include "EBADF.h"
#include "EFAULT.h"
#include "EINVAL.h"
#include "ELOOP.h"
#include "ENAMETOOLONG.h"
#include "ENOMEM.h"
#include "ENOTDIR.h"
#include "EOVERFLOW.h"

namespace linux::fstatat {

enum Error
{
#define _(name) _##name = name
    _(EACCES),
    _(EBADF),
    _(EFAULT),
    _(EINVAL),
    _(ELOOP),
    _(ENAMETOOLONG),
    _(ENOMEM),
    _(ENOTDIR),
    _(EOVERFLOW),
#undef _
};

}
