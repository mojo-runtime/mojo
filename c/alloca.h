#ifndef alloca
#  include "compiler/has/builtin/alloca.h"
#  if compiler_has_builtin_alloca
#    define alloca __builtin_alloca
#  else
#    error
#  endif
#endif
