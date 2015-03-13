#ifndef __builtin_constant_p

#include "__has_builtin.h"

#if !__has_builtin(__builtin_constant_p)
#  error
#endif

#endif
