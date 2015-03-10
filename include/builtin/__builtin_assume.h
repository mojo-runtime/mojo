#ifndef __builtin_assume

#include "config/has_builtin_assume.h"

#if !has_builtin_assume
#  define __builtin_assume(x)
#endif

#endif
