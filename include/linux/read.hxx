#pragma once

#include "c/EAGAIN.h"
#include "c/EBADF.h"
#include "c/EFAULT.h"
#include "c/EINTR.h"
#include "c/EINVAL.h"
#include "c/EIO.h"
#include "c/EISDIR.h"

namespace linux::read {

enum Error
{
#define _(name) _##name = name
    _(EAGAIN),
    _(EBADF),
    _(EFAULT),
    _(EINTR),
    _(EINVAL),
    _(EIO),
    _(EISDIR),
    // "Other errors may occur, depending on the object connected to `fd`."…
#undef _
};

}
