#ifndef compiler_has_builtin_bswap64
#  ifdef __has_builtin
#    define compiler_has_builtin_bswap64 __has_builtin(__builtin_bswap64)
#  elif defined __GNUC__
#    include "compiler/has/gnuc/minor.h"
#    define compiler_has_builtin_bswap64 compiler_has_gnuc_minor(4, 3)
#  else
#    error todo
#  endif
#endif
