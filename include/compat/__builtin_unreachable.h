#ifndef __builtin_unreachable

#include "__has_builtin.h"

#if !__has_builtin(__builtin_unreachable)
#  error
#endif

#endif
