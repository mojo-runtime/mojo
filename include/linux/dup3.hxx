#pragma once

#include "c/EBADF.h"
#include "c/EBUSY.h"
#include "c/EINTR.h"
#include "c/EINVAL.h"
#include "c/EMFILE.h"

namespace linux::dup3 {

enum Error
{
#define _(name) _##name = name
    _(EBADF),
    _(EBUSY),
    _(EINTR),
    _(EINVAL),
    _(EMFILE),
#undef _
};

}
