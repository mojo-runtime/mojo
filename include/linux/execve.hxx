#pragma once

#include "c/E2BIG.h"
#include "c/EACCES.h"
#include "c/EFAULT.h"
#include "c/EINVAL.h"
#include "c/EIO.h"
#include "c/EISDIR.h"
#include "c/ELIBBAD.h"
#include "c/ELOOP.h"
#include "c/EMFILE.h"
#include "c/ENAMETOOLONG.h"
#include "c/ENFILE.h"
#include "c/ENOENT.h"
#include "c/ENOEXEC.h"
#include "c/ENOMEM.h"
#include "c/ENOTDIR.h"
#include "c/EPERM.h"
#include "c/ETXTBSY.h"

namespace linux::execve {

enum Error
{
#define _(name) _##name = name
    _(E2BIG),
    _(EACCES),
    _(EFAULT),
    _(EINVAL),
    _(EIO),
    _(EISDIR),
    _(ELIBBAD),
    _(ELOOP),
    _(EMFILE),
    _(ENAMETOOLONG),
    _(ENFILE),
    _(ENOENT),
    _(ENOEXEC),
    _(ENOMEM),
    _(ENOTDIR),
    _(EPERM),
    _(ETXTBSY),
#undef _
};

}
