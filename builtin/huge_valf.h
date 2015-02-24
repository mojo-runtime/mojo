#ifndef has_builtin_huge_valf
#  ifdef __has_builtin
#    define has_builtin_huge_valf __has_builtin(__builtin_huge_valf)
#  elif defined __GNUC__
#    include "has/gcc/minor.h"
#    define has_builtin_huge_valf has_gcc_minor(3, 3)
#  else
#    error todo
#  endif
#endif
