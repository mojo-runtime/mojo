#ifndef has_builtin_constant_p
#  ifdef __has_builtin
#    define has_builtin_constant_p __has_builtin(__builtin_constant_p)
#  elif defined __GNUC__
#    define has_builtin_constant_p 1 /* XXX: assuming */
#  else
#    error todo
#  endif
#endif
