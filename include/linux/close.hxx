#pragma once

#include "c/EBADF.h"
#include "c/EINTR.h"
#include "c/EIO.h"

namespace linux::close {

enum Error
{
#define _(name) _##name = name
    _(EBADF),
    _(EINTR),
    _(EIO),
#undef _
};

}
