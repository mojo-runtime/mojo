#ifndef assert

#if defined(NDEBUG)
#  include "compat/__builtin_assume.h"
#  define assert __builtin_assume
#else
#  include "runtime/assertion_error.hxx"
#  define assert(x) ((x)                                                \
                     ? static_cast<void>(0)                             \
                     : runtime::assertion_error(#x, __FILE__, __LINE__, __PRETTY_FUNCTION__))
#endif

#endif
