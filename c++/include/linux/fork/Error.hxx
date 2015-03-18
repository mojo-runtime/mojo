#pragma once

#include "EAGAIN.h"
#include "ENOMEM.h"
#include "ENOSYS.h"

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
