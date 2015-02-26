#ifndef compiler_has_builtin_shufflevector
#  ifdef __has_builtin
#    define compiler_has_builtin_shufflevector __has_builtin(__builtin_shufflevector)
#  elif defined __GNUC__
#    define compiler_has_builtin_shufflevector 0 /* assuming */
#  else
#    error todo
#  endif
#endif
