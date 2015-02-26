#ifndef has_builtin_huge_valf
#  ifdef __has_builtin
#    define has_builtin_huge_valf __has_builtin(__builtin_huge_valf)
#  elif defined __GNUC__
#    include "has/gnuc/minor.h"
#    define has_builtin_huge_valf has_gnuc_minor(3, 3)
#  else
#    error todo
#  endif
#endif
