#ifndef x_has_builtin_assume
#  ifdef __has_builtin
#    define x_has_builtin_assume __has_builtin(__builtin_assume)
#  elif defined (__GNUC__)
#    define x_has_builtin_assume 0 /* assuming */
#  else
#    error todo
#  endif
#endif
