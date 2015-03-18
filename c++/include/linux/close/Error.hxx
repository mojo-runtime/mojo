#pragma once

#include "EBADF.h"
#include "EINTR.h"
#include "EIO.h"

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
