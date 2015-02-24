#ifndef _c_unreachable
#  include "has/builtin/unreachable.h"
#  if has_builtin_unreachable
#    define _c_unreachable __builtin_unreachable
#  else
#    error
#  endif
#endif
