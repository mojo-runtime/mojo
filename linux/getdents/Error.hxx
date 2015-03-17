#pragma once

#include "EBADF.h"
#include "EFAULT.h"
#include "EINVAL.h"
#include "ENOENT.h"
#include "ENOTDIR.h"

namespace linux::getdents {

enum Error
{
#define _(name) _##name = name
    _(EBADF),
    _(EFAULT),
    _(EINVAL),
    _(ENOENT),
    _(ENOTDIR),
#undef _
};

}
