#pragma once

#include "EACCES.h"
#include "EAGAIN.h"
#include "EBADF.h"
#include "EINVAL.h"
#include "ENFILE.h"
#include "ENODEV.h"
#include "ENOMEM.h"
#include "EOVERFLOW.h"
#include "EPERM.h"
#include "ETXTBSY.h"

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
