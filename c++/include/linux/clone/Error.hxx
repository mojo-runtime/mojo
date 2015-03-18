#pragma once

#include "EAGAIN.h"
#include "EINVAL.h"
#include "ENOMEM.h"
#include "EPERM.h"

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
