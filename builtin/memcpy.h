#ifndef has_builtin_memcpy
#  ifdef __has_builtin
#    define has_builtin_memcpy __has_builtin(__builtin_memcpy)
#  elif defined __GNUC__
#    define has_builtin_memcpy 1 /* assuming */
#  else
#    error todo
#  endif
#endif
