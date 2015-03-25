#pragma once

#include "c/_Exit.h"

namespace os {

[[noreturn]]
static inline
void
exit(int status) noexcept
{
    _Exit(status);
};

}
