#ifndef __strlen

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"

#if defined(__has_builtin)
#  if __has_builtin(__builtin_strlen)
#    define __strlen __builtin_strlen
#  else
#    error
#  endif
#elif defined(__GNUC__) // Version?
#  define __strlen __builtin_strlen
#else
#  error
#endif

#pragma clang diagnostic pop

#endif
