#ifndef x_assume
#  include "has/builtin/assume.h"
#  if x_has_builtin_assume
#    define x_assume __builtin_assume
#  else
#    define x_assume(x)
#  endif
#endif
