#ifndef has_builtin_assume
#  ifdef __has_builtin
#    define has_builtin_assume __has_builtin(__builtin_assume)
#  else
#    error todo
#  endif
#endif
