#ifndef __memcpy

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"

#if defined(__has_builtin)
#  if __has_builtin(__builtin_memcpy)
#    define __memcpy __builtin_memcpy
#  else
#    error
#  endif
#elif defined(__GNUC__) // Version?
#  define __memcpy __builtin_memcpy
#else
#  error
#endif

#pragma clang diagnostic pop

#endif
