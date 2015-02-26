#ifndef compiler_has_builtin_expect
#  ifdef __has_builtin
#    define compiler_has_builtin_expect __has_builtin(__builtin_expect)
#  elif defined __GNUC__
#    include "compiler/has/gnuc/major.h"
#    define compiler_has_builtin_expect compiler_has_gcc_major(3)
#  else
#    error todo
#  endif
#endif
