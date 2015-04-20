// -*- C++ -*-
#pragma once

#include "c/pid_t.h"
#include "c/struct-pt_regs.h"
#include "Result"

namespace system {

static inline
auto
clone(unsigned long flags,
      void* child_stack,
      void* ptid,
      void* ctid,
      struct pt_regs* regs) noexcept
{
#if defined(__linux__)
#  include "c/EAGAIN.h"
#  include "c/EINVAL.h"
#  include "c/ENOMEM.h"
#  include "c/EPERM.h"
#  define _(name) _##name = name

    enum Error
    {
        _(EAGAIN),
        _(EINVAL),
        _(ENOMEM),
        _(EPERM),
    };

#  undef _
#  include "c/SYS_clone.h"

    return Result<pid_t, Error>(SYS_clone, flags, child_stack, ptid, ctid, regs);

#else
#  error
#endif
}

}
