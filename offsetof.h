#ifndef offsetof
#  include "builtin/__builtin_offsetof.h"
#  define offsetof(x, y) __builtin_offsetof(x, y)
#endif
