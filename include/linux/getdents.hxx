#pragma once

#include "c/EBADF.h"
#include "c/EFAULT.h"
#include "c/EINVAL.h"
#include "c/ENOENT.h"
#include "c/ENOTDIR.h"

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
