#ifndef has_builtin_expect
#  ifdef __has_builtin
#    define has_builtin_expect __has_builtin(__builtin_expect)
#  elif defined __GNUC__
#    include "has/_gnuc/major.h"
#    define has_builtin_expect has_gcc_major(3)
#  else
#    error todo
#  endif
#endif
