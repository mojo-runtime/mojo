#pragma once

#include "c/EAGAIN.h"
#include "c/ENOMEM.h"
#include "c/ENOSYS.h"

namespace linux::fork {

enum Error
{
#define _(name) _##name = name
    _(EAGAIN),
    _(ENOMEM),
    _(ENOSYS),
#undef _
};

}
