#pragma once

#include "c/EINVAL.h"
#include "c/EMFILE.h"
#include "c/ENFILE.h"
#include "c/ENOMEM.h"

namespace linux::inotify_init1 {

enum Error
{
#define _(name) _##name = name
    _(EINVAL),
    _(EMFILE),
    _(ENFILE),
    _(ENOMEM),
#undef _
};

}
