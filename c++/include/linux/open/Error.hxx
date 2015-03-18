#pragma once

#include "EACCES.h"
#include "EDQUOT.h"
#include "EEXIST.h"
#include "EFAULT.h"
#include "EINTR.h"
#include "EINVAL.h"
#include "EISDIR.h"
#include "ELOOP.h"
#include "EMFILE.h"
#include "ENAMETOOLONG.h"
#include "ENFILE.h"
#include "ENODEV.h"
#include "ENOENT.h"
#include "ENOMEM.h"
#include "ENOSPC.h"
#include "ENOTDIR.h"
#include "ENXIO.h"
#include "EOPNOTSUPP.h"
#include "EOVERFLOW.h"
#include "EPERM.h"
#include "EROFS.h"
#include "ETXTBSY.h"
#include "EWOULDBLOCK.h"

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
