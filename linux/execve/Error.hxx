#pragma once

#include "E2BIG.h"
#include "EACCES.h"
#include "EFAULT.h"
#include "EINVAL.h"
#include "EIO.h"
#include "EISDIR.h"
#include "ELIBBAD.h"
#include "ELOOP.h"
#include "EMFILE.h"
#include "ENAMETOOLONG.h"
#include "ENFILE.h"
#include "ENOENT.h"
#include "ENOEXEC.h"
#include "ENOMEM.h"
#include "ENOTDIR.h"
#include "EPERM.h"
#include "ETXTBSY.h"

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
