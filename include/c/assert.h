#pragma once

#if defined(NDEBUG)
#  if defined(__has_builtin)
#    if __has_builtin(__builtin_assume)
#      define assert(x, ...) __builtin_assume(x)
#    endif
#  endif
#  if !defined(assert)
#    define assert(...)
#  endif
#else
#  include "__assertion_error.h"
#  include "__va_dispatch!.h"
#  define assert(...) __va_dispatch(assert_, __VA_ARGS__)
#  if defined(__cplusplus)
#    define assert_1(x) assert_2(x, nullptr)
#    define assert_2(x, message)                  \
    ((x) ? static_cast<void>(0) : __assertion_error(#x, __FILE__, __PRETTY_FUNCTION__, __LINE__, message))
#  else
#    error
#  endif
#endif
