#ifndef has_builtin_readcyclecounter
#  ifdef __has_builtin
#    define has_builtin_readcyclecounter __has_builtin(__builtin_readcyclecounter)
#  elif defined __GNUC__
#    define has_builtin_readcyclecounter 0 /* assuming */
#  else
#    error todo
#  endif
#endif
