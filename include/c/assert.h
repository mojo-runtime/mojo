#ifndef assert

#if defined(NDEBUG)
#  include "compat/__builtin_assume.h"
#  define assert __builtin_assume
#else
#  include "config/RUNTIME.h"
#  if (RUNTIME == RUNTIME_GLIBC)
#    include "compat/_c_static_cast.h"
#    include "__external/glibc/__assert_fail.h"
#    define assert(x) ((x)                                              \
                       ? _c_static_cast(void, 0)                        \
                       : __assert_fail(#x, __FILE__, __LINE__, __PRETTY_FUNCTION__))
#  else
#    error
#  endif
#endif

#endif
