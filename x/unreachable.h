#ifndef x_unreachable
#  include "has/builtin/unreachable.h"
#  if has_builtin_unreachable
#    define x_unreachable __builtin_unreachable
#  else
#    error
#  endif
#endif
