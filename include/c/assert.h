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

#if defined(__unix__)
#  include "STDERR_FILENO.h"
#  include "strlen.h"
#  if defined(__cplusplus)
#    include "os/write.hxx"
#    define __write(string) ::os::write(STDERR_FILENO, string, strlen(string))
#  else
#    error
#  endif
#else
#  error
#endif

__attribute__((__noreturn__, __nothrow__))
static inline
void
__assertion_error(const char* message, const char* file, const char* function, unsigned line)
{
    // Super naive.
    __write("\033[31;1massertion error:\033[0m ");
    __write(message);
    __write("\n  * function: ");
    __write(function);
    __write("\n  * file:     ");
    __write(file);
    __write("\n  * line:     TODO");
    __write("\n");

    _Exit(EXIT_FAILURE);
}

#undef __write

#pragma clang diagnostic pop

//--------------------------------------------------------------------------------------------------

#endif
