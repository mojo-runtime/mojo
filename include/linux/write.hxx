#pragma once

#include "c/EAGAIN.h"
#include "c/EBADF.h"
#include "c/EDESTADDRREQ.h"
#include "c/EDQUOT.h"
#include "c/EFAULT.h"
#include "c/EFBIG.h"
#include "c/EINTR.h"
#include "c/EINVAL.h"
#include "c/EIO.h"
#include "c/ENOSPC.h"
#include "c/EPIPE.h"

namespace linux::write {

enum Error
{
#define _(name) _##name = name
    _(EAGAIN),
    _(EBADF),
    _(EDESTADDRREQ),
    _(EDQUOT),
    _(EFAULT),
    _(EFBIG),
    _(EINTR),
    _(EINVAL),
    _(EIO),
    _(ENOSPC),
    _(EPIPE),
    // "Other errors may occur, depending on the object connected to `fd`"…
#undef _
};

}
