#pragma once

#include "c/EFAULT.h"
#include "c/EINVAL.h"
#include "c/EMFILE.h"
#include "c/ENFILE.h"

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
