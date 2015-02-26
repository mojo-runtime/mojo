#ifndef x_noreturn
#  include "has/attribute/noreturn.h"
#  if has_attribute_noreturn
#    define x_noreturn __attribute__((__noreturn__))
#  else
#    error
#  endif
#endif
