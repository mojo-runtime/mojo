#pragma once

#include "EBADF.h"
#include "EFAULT.h"
#include "ENOMEM.h"
#include "EOVERFLOW.h"

namespace linux::fstat {

enum Error
{
#define _(name) _##name = name
    _(EBADF),
    _(EFAULT),
    _(ENOMEM),
    _(EOVERFLOW),
#undef _
};

}
