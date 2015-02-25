#ifndef compiler_has_builtin_alloca
#  ifdef __has_builtin
#    define compiler_has_builtin_alloca __has_builtin(__builtin_alloca)
#  elif defined __GNUC__
#    define compiler_has_builtin_alloca 1 /* assuming */
#  else
#    error todo
#  endif
#endif
