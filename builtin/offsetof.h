#ifndef has_builtin_offsetof
#  ifdef __has_builtin
#    define has_builtin_offsetof __has_builtin(__builtin_offsetof)
#  elif defined __GNUC__
#    define has_builtin_offsetof 1 /* assuming */
#  else
#    error todo
#  endif
#endif
