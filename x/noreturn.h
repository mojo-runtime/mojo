#ifndef x_noreturn
#  include "compiler/has/attribute/noreturn.h"
#  if compiler_has_attribute_noreturn
#    define x_noreturn __attribute__((__noreturn__))
#  else
#    error
#  endif
#endif
