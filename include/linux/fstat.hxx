#pragma once

#include "c/EBADF.h"
#include "c/EFAULT.h"
#include "c/ENOMEM.h"
#include "c/EOVERFLOW.h"

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
