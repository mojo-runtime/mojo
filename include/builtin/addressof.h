#ifndef addressof

#if !defined(__cplusplus)
#  define addressof(x) (&(x))
#else
#  include "feature/has_builtin_addressof.h"
#  if has_builtin_addressof
#    define addressof __builtin_addressof
#  else
#    error
#  endif
#endif

#endif
