#ifndef c_builtin_expect_h_
#define c_builtin_expect_h_

#include "feature/has_builtin_expect.h"

#if has_builtin_expect
#  define expect __builtin_expect
#else
#  error
#endif

#endif
