#ifndef has_builtin_convertvector
#  ifdef __has_builtin
#    define has_builtin_convertvector __has_builtin(__builtin_convertvector)
#  elif defined __GNUC__
#    define has_builtin_convertvector 0 /* assuming */
#  else
#    error todo
#  endif
#endif
