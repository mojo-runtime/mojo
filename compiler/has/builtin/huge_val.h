#ifndef compiler_has_builtin_huge_val
#  ifdef __has_builtin
#    define compiler_has_builtin_huge_val __has_builtin(__builtin_huge_val)
#  elif defined __GNUC__
#    include "compiler/has/gcc/minor.h"
#    define compiler_has_builtin_huge_val has_gcc_minor(3, 3)
#  else
#    error todo
#  endif
#endif
