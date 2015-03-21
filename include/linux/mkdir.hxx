#pragma once

#include <EACCES>
#include <EDQUOT>
#include <EEXIST>
#include <EFAULT>
#include <ELOOP>
#include <EMLINK>
#include <ENAMETOOLONG>
#include <ENOENT>
#include <ENOMEM>
#include <ENOSPC>
#include <ENOTDIR>
#include <EPERM>
#include <EROFS>

namespace linux::mkdir {

enum Error
{
#define _(name) _##name = name
    _(EACCES),
    _(EDQUOT),
    _(EEXIST),
    _(EFAULT),
    _(ELOOP),
    _(EMLINK),
    _(ENAMETOOLONG),
    _(ENOENT),
    _(ENOMEM),
    _(ENOSPC),
    _(ENOTDIR),
    _(EPERM),
    _(EROFS),
#undef _
};

}
