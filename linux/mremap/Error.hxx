#pragma once

#include "EAGAIN.h"
#include "EFAULT.h"
#include "EINVAL.h"
#include "ENOMEM.h"

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
