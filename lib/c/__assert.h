#pragma once

#pragma clang diagnostic ignored "-Wgnu-zero-variadic-macro-arguments" // FIXME

#if defined(DEBUG)
#  include <feature/__has_builtin_assume.h>
#  if __has_builtin_assume
#    define __assert(x, ...) __builtin_assume(x)
#  else
#    define __assert(x, ...)
#  endif
#else
#  include "__debug_error.h"
#  include "__old_style_cast.h"
#  define __assert(...)             __assert_(__VA_ARGS__, 2, 1)(__VA_ARGS__)
#  define __assert_(_1, _2, n, ...) __assert_ ## n
#  define __assert_1(x)             __assert_2(x, #x)
#  define __assert_2(x, message)                                        \
    ((x) ? __old_style_cast(void, 0) :                                  \
     __debug_error("assertion error", __FILE__, __PRETTY_FUNCTION__, __LINE__, message))
#endif

