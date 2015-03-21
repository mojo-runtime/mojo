#pragma once

#include "c/EACCES.h"
#include "c/EDQUOT.h"
#include "c/EEXIST.h"
#include "c/EFAULT.h"
#include "c/EINTR.h"
#include "c/EINVAL.h"
#include "c/EISDIR.h"
#include "c/ELOOP.h"
#include "c/EMFILE.h"
#include "c/ENAMETOOLONG.h"
#include "c/ENFILE.h"
#include "c/ENODEV.h"
#include "c/ENOENT.h"
#include "c/ENOMEM.h"
#include "c/ENOSPC.h"
#include "c/ENOTDIR.h"
#include "c/ENXIO.h"
#include "c/EOPNOTSUPP.h"
#include "c/EOVERFLOW.h"
#include "c/EPERM.h"
#include "c/EROFS.h"
#include "c/ETXTBSY.h"
#include "c/EWOULDBLOCK.h"

namespace linux::open {

enum Error
{
#define _(name) _##name = name
    _(EACCES),
    _(EDQUOT),
    _(EEXIST),
    _(EFAULT),
    _(EINTR),
    _(EINVAL),
    _(EISDIR),
    _(ELOOP),
    _(EMFILE),
    _(ENAMETOOLONG),
    _(ENFILE),
    _(ENODEV),
    _(ENOENT),
    _(ENOSPC),
    _(ENOTDIR),
    _(ENXIO),
    _(EOPNOTSUPP),
    _(EOVERFLOW),
    _(EPERM),
    _(EROFS),
    _(ETXTBSY),
    _(EWOULDBLOCK),
#undef _
};

}
