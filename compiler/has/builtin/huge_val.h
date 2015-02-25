#ifndef compiler_has_builtin_huge_val
#  ifdef __has_builtin
#    define compiler_has_builtin_huge_val __has_builtin(__builtin_huge_val)
#  elif defined __GNUC__
#    include "compiler/has/_gnuc/minor.h"
#    define compiler_has_builtin_huge_val _compiler_has_gnuc_minor(3, 3)
#  else
#    error todo
#  endif
#endif
