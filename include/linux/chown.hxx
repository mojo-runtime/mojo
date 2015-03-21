#pragma once

#include <EACCES>
#include <EFAULT>
#include <ELOOP>
#include <ENAMETOOLONG>
#include <ENOENT>
#include <ENOMEM>
#include <ENOTDIR>
#include <EPERM>
#include <EROFS>

enum __chown__Error
{
#define _(name) _##name = name
    _(EACCES),
    _(EFAULT),
    _(ELOOP),
    _(ENAMETOOLONG),
    _(ENOENT),
    _(ENOMEM),
    _(ENOTDIR),
    _(EPERM),
    _(EROFS),
#undef _
};
