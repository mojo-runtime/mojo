#ifndef has_builtin_assume_aligned
#  ifdef __has_builtin
#    define has_builtin_assume_aligned __has_builtin(__builtin_assume_aligned)
#  elif defined __GNUC__
#    define has_builtin_assume_aligned 1 /* assuming */
#  else
#    error todo
#  endif
#endif
