#ifndef compiler_assume
#  include "has/builtin/assume.h"
#  if has_builtin_assume
#    define compiler_assume __builtin_assume
#  else
#    define compiler_assume(x)
#  endif
#endif
