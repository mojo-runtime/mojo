#pragma once

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"

#if !defined(__expect)
#  include "config/__has_builtin_expect.h"
#  if __has_builtin_expect
#    define __expect(x, y) __builtin_expect(x, y)
#  endif
#endif

#if !defined(__expect)
#  define __expect(x, y) (x)
#endif

#pragma clang diagnostic pop
