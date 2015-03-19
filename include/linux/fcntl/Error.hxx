#pragma once

#include "EACCES.h"
#include "EAGAIN.h"
#include "EBADF.h"
#include "EDEADLK.h"
#include "EFAULT.h"
#include "EINTR.h"
#include "EINVAL.h"
#include "EMFILE.h"
#include "ENOLCK.h"
#include "EPERM.h"

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
