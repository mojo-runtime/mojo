#pragma once

#include <EBADF>
#include <EFAULT>
#include <ENOMEM>
#include <EOVERFLOW>

namespace linux::fstat {

enum Error
{
#define _(name) _##name = name
    _(EBADF),
    _(EFAULT),
    _(ENOMEM),
    _(EOVERFLOW),
#undef _
};

}
