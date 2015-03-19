#pragma once

#include <EAGAIN>
#include <ENOMEM>
#include <ENOSYS>

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
