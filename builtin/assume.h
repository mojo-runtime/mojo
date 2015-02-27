#ifndef assume
#  include "has/builtin/assume.h"
#  if has_builtin_assume
#    define assume __builtin_assume
#  else
#    define assume(x)
#  endif
#endif
