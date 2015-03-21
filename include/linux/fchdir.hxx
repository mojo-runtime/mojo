#pragma once

#include "c/EACCES.h"
#include "c/EBADF.h"

namespace linux::fchdir {

enum Error
{
#define _(name) _##name = name
    // TODO(?): "The general erros for `fchdir()` are listed below:
    _(EACCES),
    _(EBADF),
    // ENOTDIR, I imagine?
#undef _
};

}
