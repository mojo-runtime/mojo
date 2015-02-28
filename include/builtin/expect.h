#ifndef expect

#include "feature/has_builtin_expect.h"

#if has_builtin_expect
#  define expect __builtin_expect
#else
#  error
#endif

#endif
