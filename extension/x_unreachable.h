#ifndef x_unreachable
#  include "has/builtin/unreachable.h"
#  if has_builtin_unreachable
#    define x_unreachable() __builtin_unreachable()
#  endif
#endif

#ifndef x_unreachable
#  error
#endif
