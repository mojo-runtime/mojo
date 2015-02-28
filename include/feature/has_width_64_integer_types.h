#ifndef has_width_64_integer_types

#include "compat/__POINTER_WIDTH__.h"

#if (__POINTER_WIDTH__ >= 64)
#  define has_width_64_integers 1
#else
#  error
#endif

#endif
