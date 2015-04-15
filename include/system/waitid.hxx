// -*- C++ -*-
#pragma once

#include "c/idtype_t.h"
#include "c/id_t.h"
#include "c/siginfo_t.h"
#include "c/struct rusage.h"
#include "Result.hxx"

namespace system {

static inline
auto
waitid(idtype_t       idtype,
       id_t           id,
       siginfo_t*     infop,
       int            options,
       struct rusage* usage) noexcept
{
#if defined(__linux__)
#  include "c/ECHILD.h"
#  include "c/EINTR.h"
#  include "c/EINVAL.h"
#  define _(name) _##name = name

    enum Error
    {
        _(ECHILD),
        _(EINTR),
        _(EINVAL),
    };

#  undef _
#  include "c/SYS_waitid.h"

    return Result<void, Error>(SYS_waitid, idtype, id, infop, options, usage);

#else
#  error
#endif
}

}
