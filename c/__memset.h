#ifndef __memset

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"

#if defined(__has_builtin)
#  if __has_builtin(__builtin_memset)
#    define __memset __builtin_memset
#  else
#    error
#  endif
#elif defined(__GNUC__) // Version?
#  define __memset __builtin_memset
#else
#  error
#endif

#pragma clang diagnostic pop

#endif
