#ifndef compiler_assume
#  include "compiler/has/builtin/assume.h"
#  if compiler_has_builtin_assume
#    define compiler_assume __builtin_assume
#  else
#    define compiler_assume(x)
#  endif
#endif
