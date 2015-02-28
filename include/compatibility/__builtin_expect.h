#ifndef __builtin_expect

#include "feature/has_builtin_expect.h"

#if !has_builtin_expect
#  define __builtin_expect(x, y)
#endif

#endif
