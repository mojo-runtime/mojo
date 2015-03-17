#pragma once

#include "EACCES.h"
#include "EFAULT.h"
#include "ELOOP.h"
#include "ENAMETOOLONG.h"
#include "ENOENT.h"
#include "ENOMEM.h"
#include "ENOTDIR.h"
#include "EOVERFLOW.h"

namespace linux::stat {

enum Error
{
#define _(name) _##name = name
    _(EACCES),
    _(EFAULT),
    _(ELOOP),
    _(ENAMETOOLONG),
    _(ENOENT),
    _(ENOMEM),
    _(ENOTDIR),
    _(EOVERFLOW),
#undef _
};

}
