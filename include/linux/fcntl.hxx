#pragma once

#include "c/EACCES.h"
#include "c/EAGAIN.h"
#include "c/EBADF.h"
#include "c/EDEADLK.h"
#include "c/EFAULT.h"
#include "c/EINTR.h"
#include "c/EINVAL.h"
#include "c/EMFILE.h"
#include "c/ENOLCK.h"
#include "c/EPERM.h"

namespace linux::fcntl {

enum Error
{
#define _(name) _##name = name
    _(EACCES),
    _(EAGAIN),
    _(EBADF),
    _(EDEADLK),
    _(EFAULT),
    _(EINTR),
    _(EINVAL),
    _(EMFILE),
    _(ENOLCK),
    _(EPERM),
#undef _
};

}
