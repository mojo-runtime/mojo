#pragma once

#include "EBADF.h"
#include "EBUSY.h"
#include "EINTR.h"
#include "EINVAL.h"
#include "EMFILE.h"

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
