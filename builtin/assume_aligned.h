#ifndef assume_aligned
#  include "compiler/has/builtin/assume_aligned.h"
#  if compiler_has_builtin_assume_aligned
#    define assume_aligned __builtin_assume_aligned
#  else
#    define assume_aligned(x, ...) (x)
#  endif
#endif
