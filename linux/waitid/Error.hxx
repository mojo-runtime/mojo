#pragma once

#include "ECHILD.h"
#include "EINTR.h"
#include "EINVAL.h"

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
