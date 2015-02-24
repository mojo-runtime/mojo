#ifndef x_unreachable
#  include "has/builtin/unreachable.h"
#  if x_has_builtin_unreachable
#    define x_unreachable __builtin_unreachable
#  else
#    error todo
#  endif
#endif
