#pragma once

#include "c/ECHILD.h"
#include "c/EINTR.h"
#include "c/EINVAL.h"

namespace linux::waitid {

enum Error
{
#define _(name) _##name = name
    _(ECHILD),
    _(EINTR),
    _(EINVAL),
#undef _
};

}
