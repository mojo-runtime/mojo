#pragma once

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"

#if defined(__has_builtin)
#  if __has_builtin(__builtin_assume)
#    define __assume __builtin_assume
#  endif
#endif

#if !defined(__assume)
#  define __assume(x)
#endif
