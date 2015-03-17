#pragma once

#include "EINVAL.h"
#include "EMFILE.h"
#include "ENFILE.h"
#include "ENOMEM.h"

namespace linux::epoll_create1 {

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
