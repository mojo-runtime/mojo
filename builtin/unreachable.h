#ifndef has_builtin_unreachable
#  ifdef __has_builtin
#    define has_builtin_unreachable __has_builtin(__builtin_unreachable)
#  else
#    error todo
#  endif
#endif
