#ifndef c_builtin_assume_aligned_h_
#define c_builtin_assume_aligned_h_

#include "feature/has_builtin_assume_aligned.h"

#if has_builtin_assume_aligned
#  define assume_aligned __builtin_assume_aligned
#else
#  define assume_aligned(x, ...) (x)
#endif

#endif
