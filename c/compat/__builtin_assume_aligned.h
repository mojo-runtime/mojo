#ifndef __builtin_assume_aligned

#include "__has_builtin.h"

#if !__has_builtin(__builtin_assume_aligned)
#  define __builtin_assume_aligned(x, ...) (x)
#endif

#endif
