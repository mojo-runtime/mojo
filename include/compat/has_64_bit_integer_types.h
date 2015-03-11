#ifndef has_64_bit_integer_types

#include "__POINTER_WIDTH__.h"

#if (__POINTER_WIDTH__ >= 64)
#  define has_64_bit_integer_types 1
#else
#  error
#endif

#endif
