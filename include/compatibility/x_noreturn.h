#if !defined(x_noreturn)
#  include "feature/has_attribute_noreturn.h"
#  if has_attribute_noreturn
#    define x_noreturn __attribute__((__noreturn__))
#  else
#    error
#  endif
#endif
