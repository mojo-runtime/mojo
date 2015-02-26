#ifndef has_builtin_assume
#  ifdef __has_builtin
#    define has_builtin_assume __has_builtin(__builtin_assume)
#  elif defined __GNUC__
#    define has_builtin_assume 0 /* assuming */
#  else
#    error todo
#  endif
#endif
