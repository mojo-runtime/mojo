#pragma once

#include <EBADF>
#include <EINTR>
#include <EIO>

namespace linux::close {

enum Error
{
#define _(name) _##name = name
    _(EBADF),
    _(EINTR),
    _(EIO),
#undef _
};

}
