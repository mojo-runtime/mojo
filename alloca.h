#ifndef alloca
#  include "has/builtin/alloca.h"
#  if has_builtin_alloca
#    define alloca __builtin_alloca
#  else
#    error
#  endif
#endif
