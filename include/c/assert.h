#ifndef assert

#if defined(NDEBUG)
#  include "compat/__builtin_assume.h"
#  define assert __builtin_assume
#else
#  include "compat/x_static_cast.h"
#  if defined(__gnu_linux__)
#    include "__external/glibc/__assert_fail.h"
#    define assert(x) ((x)                                              \
                       ? x_static_cast(void, 0)                         \
                       : __assert_fail(#x, __FILE__, __LINE__, __PRETTY_FUNCTION__))
#  elif defined(__FreeBSD__)
#    include "__external/bsd/__assert.h"
#    define assert(x) ((x)                                              \
                       ? x_static_cast(void, 0)                         \
                       : __assert(__PRETTY_FUNCTION__, __FILE__, __LINE__, #x))
#  else
#    error
#  endif
#endif

#endif
