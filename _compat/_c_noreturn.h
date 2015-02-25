#ifndef _c_noreturn
#  include "has/attribute/noreturn.h"
#  if has_attribute_noreturn
#    define _c_noreturn __attribute__((__noreturn__))
#  else
#    error
#  endif
#endif
