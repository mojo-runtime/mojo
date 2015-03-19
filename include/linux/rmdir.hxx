#pragma once

#include <EACCES>
#include <EBUSY>
#include <EFAULT>
#include <EINVAL>
#include <ELOOP>
#include <ENAMETOOLONG>
#include <ENOENT>
#include <ENOMEM>
#include <ENOTDIR>
#include <ENOTEMPTY>
#include <EPERM>
#include <EROFS>

namespace linux::rmdir {

enum Error
{
#define _(name) _##name = name
    _(EACCES),
    _(EBUSY),
    _(EFAULT),
    _(EINVAL),
    _(ELOOP),
    _(ENAMETOOLONG),
    _(ENOENT),
    _(ENOMEM),
    _(ENOTDIR),
    _(ENOTEMPTY),
    _(EPERM),
    _(EROFS),
#undef _
};

}
