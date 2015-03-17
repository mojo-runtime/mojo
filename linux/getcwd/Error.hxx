#pragma once

#include "EACCES.h"
#include "EFAULT.h"
#include "EINVAL.h"
#include "ENAMETOOLONG.h"
#include "ENOENT.h"
#include "ERANGE.h"

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
