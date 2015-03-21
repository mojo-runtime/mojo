#pragma once

#include "c/ECHILD.h"
#include "c/EINTR.h"
#include "c/EINVAL.h"
#include "c/SYS_waitid.h"
#include "c/idtype_t.h"
#include "c/id_t.h"
#include "c/siginfo_t.h"
#include "c/struct rusage.h"

#include "Result.hxx"

namespace linux {

static inline
auto
waitid(idtype_t       idtype,
       id_t           id,
       siginfo_t*     infop,
       int            options,
       struct rusage* usage) noexcept
{
    enum Error
    {
#define _(name) _##name = name
        _(ECHILD),
        _(EINTR),
        _(EINVAL),
#undef _
    };

    return Result<void, Error>(SYS_waitid, idtype, id, infop, options, usage);
}

}
