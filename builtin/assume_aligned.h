#ifndef assume_aligned
#  include "has/builtin/assume_aligned.h"
#  if has_builtin_assume_aligned
#    define assume_aligned __builtin_assume_aligned
#  else
#    define assume_aligned(x, ...) (x)
#  endif
#endif
