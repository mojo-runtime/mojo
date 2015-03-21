#pragma once

#include "c/EACCES.h"
#include "c/EFAULT.h"
#include "c/EINVAL.h"
#include "c/ENAMETOOLONG.h"
#include "c/ENOENT.h"
#include "c/ERANGE.h"

namespace linux::getcwd {

enum Error
{
#define _(name) _##name = name
    _(EACCES),
    _(EFAULT),
    _(EINVAL),
    _(ENAMETOOLONG),
    _(ENOENT),
    _(ERANGE),
#undef _
};

}
