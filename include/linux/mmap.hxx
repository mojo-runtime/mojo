#pragma once

#include "c/EACCES.h"
#include "c/EAGAIN.h"
#include "c/EBADF.h"
#include "c/EINVAL.h"
#include "c/ENFILE.h"
#include "c/ENODEV.h"
#include "c/ENOMEM.h"
#include "c/EOVERFLOW.h"
#include "c/EPERM.h"
#include "c/ETXTBSY.h"

namespace linux::mmap {

enum Error
{
#define _(name) _##name = name
    _(EACCES),
    _(EAGAIN),
    _(EBADF),
    _(EINVAL),
    _(ENFILE),
    _(ENODEV),
    _(ENOMEM),
    _(EOVERFLOW),
    _(EPERM),
    _(ETXTBSY),
#undef _
};

}
