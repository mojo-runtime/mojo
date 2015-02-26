#ifndef compiler_has_builtin_huge_vall
#  ifdef __has_builtin
#    define compiler_has_builtin_huge_vall __has_builtin(__builtin_huge_vall)
#  elif defined __GNUC__
#    include "compiler/has/gnuc/minor.h"
#    define compiler_has_builtin_huge_vall compiler_has_gnuc_minor(3, 3)
#  else
#    error todo
#  endif
#endif
