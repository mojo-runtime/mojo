#ifndef x_unreachable
#  include "compiler/has/builtin/unreachable.h"
#  if compiler_has_builtin_unreachable
#    define x_unreachable __builtin_unreachable
#  else
#    error
#  endif
#endif
