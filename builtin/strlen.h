#ifndef has_builtin_strlen
#  ifdef __has_builtin
#    define has_builtin_strlen __has_builtin(__builtin_strlen)
#  elif defined __GNUC__
#    define has_builtin_strlen 1 /* XXX: assuming */
#  else
#    error todo
#  endif
#endif
