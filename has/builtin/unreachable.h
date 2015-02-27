#ifndef has_builtin_unreachable
#  ifdef __has_builtin
#    define has_builtin_unreachable __has_builtin(__builtin_unreachable)
#  elif defined __GNUC__
#    define has_builtin_unreachable 1 /* assuming */
#  else
#    error todo
#  endif
#endif
