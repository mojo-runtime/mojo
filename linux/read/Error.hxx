#pragma once

#include "EAGAIN.h"
#include "EBADF.h"
#include "EFAULT.h"
#include "EINTR.h"
#include "EINVAL.h"
#include "EIO.h"
#include "EISDIR.h"

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
