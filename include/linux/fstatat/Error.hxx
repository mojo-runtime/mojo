#pragma once

#include <EACCES>
#include <EBADF>
#include <EFAULT>
#include <EINVAL>
#include <ELOOP>
#include <ENAMETOOLONG>
#include <ENOMEM>
#include <ENOTDIR>
#include <EOVERFLOW>

namespace linux::fstatat {

enum Error
{
#define _(name) _##name = name
    _(EACCES),
    _(EBADF),
    _(EFAULT),
    _(EINVAL),
    _(ELOOP),
    _(ENAMETOOLONG),
    _(ENOMEM),
    _(ENOTDIR),
    _(EOVERFLOW),
#undef _
};

}
