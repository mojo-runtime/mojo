#ifndef __strcmp

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"

#if defined(__has_builtin)
#  if __has_builtin(__builtin_strcmp)
#    define __strcmp __builtin_strcmp
#  else
#    error
#  endif
#elif defined(__GNUC__) // Version?
#  define __strcmp __builtin_strcmp
#else
#  error
#endif

#pragma clang diagnostic pop

#endif
