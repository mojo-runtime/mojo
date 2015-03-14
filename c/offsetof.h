#ifndef offsetof

#if defined(__has_builtin)
#  if __has_builtin(__builtin_offsetof)
#    define offsetof __builtin_offsetof
#  elif defined(__clang__) // False negative
#    define offsetof __builtin_offsetof
#  else
#    error
#  endif
#elif defined(__GNUC__) // Version?
#  define offsetof __builtin_offsetof
#else
#  error
#endif

#endif
