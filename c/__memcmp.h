#ifndef __memcmp

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"

#if defined(__has_builtin)
#  if __has_builtin(__builtin_memcmp)
#    define __memcmp __builtin_memcmp
#  else
#    error
#  endif
#elif defined(__GNUC__) // Version?
#  define __memcmp __builtin_memcmp
#else
#  error
#endif

#pragma clang diagnostic pop

#endif
