#ifndef __unreachable

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"

#if defined(__has_builtin)
#  if __has_builtin(__builtin_unreachable)
#    define __unreachable __builtin_unreachable
#  else
#    error
#  endif
#elif defined(__GNUC__) // Version?
#  define __unreachable __builtin_unreachable
#else
#  error
#endif

#pragma clang diagnostic pop

#endif
