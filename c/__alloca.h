#pragma once

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"

#if defined(__has_builtin)
#  if __has_builtin(__builtin_alloca)
#    define __alloca __builtin_alloca
#  else
#    error
#  endif
#elif defined(__GNUC__) // Version?
#  define __alloca __builtin_alloca
#else
#  error
#endif

#pragma clang diagnostic pop
