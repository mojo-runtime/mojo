#pragma once

#include "EFAULT.h"
#include "EINVAL.h"
#include "EMFILE.h"
#include "ENFILE.h"

namespace linux::pipe2 {

enum Error
{
#define _(name) _##name = name
    _(EFAULT),
    _(EINVAL),
    _(EMFILE),
    _(ENFILE),
#undef _
};

}
