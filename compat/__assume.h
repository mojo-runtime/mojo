#pragma once

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"

#if !defined(__assume)
#  include "config/__has_builtin_assume.h"
#  if __has_builtin_assume
#    define __assume(x) __builtin_assume(x)
#  endif
#endif

#if !defined(__assume)
#  define __assume(x)
#endif

#pragma clang diagnostic pop
