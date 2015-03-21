#pragma once

#include <ECHILD>
#include <EINTR>
#include <EINVAL>

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
