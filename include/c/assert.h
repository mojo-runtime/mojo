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
#include "__noexcept.h"
#include "__noreturn.h"
#include "__static_cast.h"

#pragma clang diagnostic ignored "-Wgnu-zero-variadic-macro-arguments"
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"
#pragma clang diagnostic ignored "-Wunused-parameter"

#define assert(...)               __assert_(__VA_ARGS__, 2, 1)(__VA_ARGS__)
#define __assert_(_1, _2, n, ...) __assert_ ## n
#define __assert_1(x)             __assert_2(x, #x)
#define __assert_2(x, message)                                          \
    ((x) ? __static_cast(void, 0) :                                     \
     __assertion_error(message, __FILE__, __PRETTY_FUNCTION__, __LINE__))

#if defined(__unix__)
#  include "STDERR_FILENO.h"
#  include "SYS_write.h"
#  include "strlen.h"
#  include "__reinterpret_cast.h"
#  include "__syscall.h"
#  define __write(string) __syscall_3(SYS_write, STDERR_FILENO, __reinterpret_cast(__Word, string), strlen(string))
#else
#  error
#endif

__noreturn
static inline
void
__assertion_error(const char* message, const char* file, const char* function, unsigned line) __noexcept
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
