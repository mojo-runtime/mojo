#ifndef compiler_has_builtin_addressof
#  ifdef __has_builtin
#    define compiler_has_builtin_addressof __has_builtin(__builtin_addressof)
#  elif defined __GNUC__
#    define compiler_has_builtin_addressof 0 /* assuming */
#  else
#    error todo
#  endif
#endif
