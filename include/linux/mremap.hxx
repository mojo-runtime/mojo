#pragma once

#include "c/EAGAIN.h"
#include "c/EFAULT.h"
#include "c/EINVAL.h"
#include "c/ENOMEM.h"

namespace linux::mremap {

enum Error
{
#define _(name) _##name = name
    _(EAGAIN),
    _(EFAULT),
    _(EINVAL),
    _(ENOMEM),
#undef _
};

}
