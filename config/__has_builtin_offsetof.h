#pragma once

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"

#if !defined(__has_builtin_offsetof) && defined(__has_builtin)
#  if defined(__clang__) // False negative
#    define __has_builtin_offsetof 1
#  else
#    define __has_builtin_offsetof __has_builtin(__builtin_offsetof)
#  endif
#endif

#if !defined(__has_builtin_offsetof) && defined(__GNUC__)
#  define __has_builtin_offsetof 1 // Version?
#endif

#if !defined(__has_builtin_offsetof)
#  define __has_builtin_offsetof 0
#endif

#pragma clang diagnostic pop
