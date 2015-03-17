#pragma once

#if defined(NDEBUG)
#  include "compat/__assume.h"
#  define assert(x) __assume(x)
#else
#  include "compat/__noexcept.h"
#  include "compat/__noreturn.h"
#  include "compat/__static_cast.h"
#  include "EXIT_FAILURE.h"
#  include "_exit.h"
#  define assert(x) ((x)                                                \
                     ? __static_cast(void, 0)                           \
                     : __assertion_error(#x, __FILE__, __LINE__, __PRETTY_FUNCTION__))


__noreturn
static inline
void
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-parameter"
__assertion_error(const char* expression, const char* file, unsigned line, const char* function) __noexcept
#pragma clang diagnostic pop
{
    // FIXME
    _exit(EXIT_FAILURE);
}

#endif
