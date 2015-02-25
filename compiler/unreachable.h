#ifndef compiler_unreachable
#  include "compiler/has/builtin/unreachable.h"
#  if compiler_has_builtin_unreachable
#    define compiler_unreachable __builtin_unreachable
#  else
#    error
#  endif
#endif
