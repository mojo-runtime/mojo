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

//--------------------------------------------------------------------------------------------------

#include "EXIT_FAILURE.h"
#include "_Exit.h"

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"
#pragma clang diagnostic ignored "-Wunused-parameter"

#define assert(...)               __assert_(__VA_ARGS__, 2, 1)(__VA_ARGS__)
#define __assert_(_1, _2, n, ...) __assert_ ## n
#define __assert_1(x)             __assert_2(x, #x)

#if defined(__cplusplus)
#  define __assert_2(x, message)                                        \
    ((x) ? static_cast<void>(0) :                                       \
     __assertion_error(message, __FILE__, __PRETTY_FUNCTION__, __LINE__))
#else
#  error
#endif

__attribute__((__noreturn__, __nothrow__))
static inline
void
__assertion_error(const char* message, const char* file, const char* function, unsigned line)
{
    // TODO
    _Exit(EXIT_FAILURE);
}

#pragma clang diagnostic pop

//--------------------------------------------------------------------------------------------------

#endif
