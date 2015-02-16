#ifndef alloca
#  include "builtin/__builtin_alloca.h"
#  define alloca(size) __builtin_alloca(size)
#endif
