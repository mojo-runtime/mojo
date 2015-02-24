#ifndef has_builtin_huge_vall
#  ifdef __has_builtin
#    define has_builtin_huge_vall __has_builtin(__builtin_huge_vall)
#  elif defined __GNUC__
#    include "has/gcc/minor.h"
#    define has_builtin_huge_vall has_gcc_minor(3, 3)
#  else
#    error todo
#  endif
#endif
