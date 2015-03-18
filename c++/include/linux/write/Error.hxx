#pragma once

#include "EAGAIN.h"
#include "EBADF.h"
#include "EDESTADDRREQ.h"
#include "EDQUOT.h"
#include "EFAULT.h"
#include "EFBIG.h"
#include "EINTR.h"
#include "EINVAL.h"
#include "EIO.h"
#include "ENOSPC.h"
#include "EPIPE.h"

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
