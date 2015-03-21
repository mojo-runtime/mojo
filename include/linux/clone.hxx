#pragma once

#include "c/EAGAIN.h"
#include "c/EINVAL.h"
#include "c/ENOMEM.h"
#include "c/EPERM.h"
#include "c/SYS_clone.h"
#include "c/pid_t.h"
#include "c/struct pt_regs.h"

namespace linux {

static inline
auto
clone(unsigned long flags,
      void* child_stack,
      void* ptid,
      void* ctid,
      struct pt_regs* regs) noexcept
{
    enum Error
    {
#define _(name) _##name = name
        _(EAGAIN),
        _(EINVAL),
        _(ENOMEM),
        _(EPERM),
#undef _
    };

    return Result<pid_t, Error>(SYS_clone, flags, child_stack, ptid, ctid, regs);
}

}
