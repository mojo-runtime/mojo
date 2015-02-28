#ifndef assert

#if defined(NDEBUG)
#  include "compatibility/__builtin_assume.h"
#  define assert __builtin_assume
#else
#  include "platform/RUNTIME.h"
#  if (RUNTIME == RUNTIME_GNU)
#    include "compatibility/STATIC_CAST.h"
#    include "__glibc/__assert_fail.h"
#    define assert(x) ((x)                                              \
                       ? STATIC_CAST(void, 0)                           \
                       : __assert_fail(#x, __FILE__, __LINE__, __PRETTY_FUNCTION__))
#  else
#    error
#  endif
#endif

#endif
