#ifndef assume
#  include "compiler/has/builtin/assume.h"
#  if compiler_has_builtin_assume
#    define assume __builtin_assume
#  else
#    define assume(x)
#  endif
#endif
