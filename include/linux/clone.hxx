#pragma once

#include <EAGAIN>
#include <EINVAL>
#include <ENOMEM>
#include <EPERM>

namespace linux::clone {

enum Error
{
#define _(name) _##name = name
    _(EAGAIN),
    _(EINVAL),
    _(ENOMEM),
    _(EPERM),
#undef _
};

}
