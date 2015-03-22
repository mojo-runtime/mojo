#pragma once

#if defined(NDEBUG)
#  include "assume!.h"
#  define assert(x, ...) assume(x)
#else
#  include "c/EXIT_FAILURE.h"
#  include "c/_Exit.h"
#  include "__va_dispatch!.h"
#  define assert(...) __va_dispatch(assert_, __VA_ARGS__)
#  if defined(__cplusplus)
#    define assert_1(x) assert_2(x, nullptr)
#    define assert_2(x, message)                  \
    ((x) ? static_cast<void>(0) : __assertion_error(#x, __FILE__, __PRETTY_FUNCTION__, __LINE__, message))
#  else
#    error
#  endif

__attribute__((__noreturn__, __nothrow__))
static inline
void
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-parameter"
__assertion_error(const char* x, const char* file, const char* function, unsigned line, const char* message)
#pragma clang diagnostic pop
{
    // TODO
    _Exit(EXIT_FAILURE);
}

#endif
