#pragma once

#include <EACCES>
#include <EFAULT>
#include <EINVAL>
#include <ENAMETOOLONG>
#include <ENOENT>
#include <ERANGE>

namespace linux::getcwd {

enum Error
{
#define _(name) _##name = name
    _(EACCES),
    _(EFAULT),
    _(EINVAL),
    _(ENAMETOOLONG),
    _(ENOENT),
    _(ERANGE),
#undef _
};

}
