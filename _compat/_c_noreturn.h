#ifndef _c_noreturn
#  include "compiler/has/attribute/noreturn.h"
#  if compiler_has_attribute_noreturn
#    define _c_noreturn __attribute__((__noreturn__))
#  else
#    error
#  endif
#endif
