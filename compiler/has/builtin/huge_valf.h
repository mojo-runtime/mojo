#ifndef compiler_has_builtin_huge_valf
#  ifdef __has_builtin
#    define compiler_has_builtin_huge_valf __has_builtin(__builtin_huge_valf)
#  elif defined __GNUC__
#    include "compiler/has/_gnuc/minor.h"
#    define compiler_has_builtin_huge_valf _compiler_has_gnuc_minor(3, 3)
#  else
#    error todo
#  endif
#endif
