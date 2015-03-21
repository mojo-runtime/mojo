#pragma once

#include "c/EAGAIN.h"
#include "c/EINVAL.h"
#include "c/ENOMEM.h"
#include "c/EPERM.h"

namespace linux::clone {

enum Error
{
#define _(name) _##name = name
    _(EAGAIN),
    _(EINVAL),
    _(ENOMEM),
    _(EPERM),
#undef _
};

}
