#ifndef compiler_has_builtin_memcmp
#  ifdef __has_builtin
#    define compiler_has_builtin_memcmp __has_builtin(__builtin_memcmp)
#  elif defined __GNUC__
#    include "compiler/has/gnuc/minor.h"
#    define compiler_has_builtin_memcmp compiler_has_gnuc_minor(2, 91)
#  else
#    error todo
#  endif
#endif
