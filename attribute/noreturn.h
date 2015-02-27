#ifndef attribute_noreturn
#  include "has/attribute/noreturn.h"
#  if has_attribute_noreturn
#    define attribute_noreturn __attribute__((__noreturn__))
#  else
#    error
#  endif
#endif
