#ifndef has_builtin_bswap32
#  ifdef __has_builtin
#    define has_builtin_bswap32 __has_builtin(__builtin_bswap32)
#  elif defined __GNUC__
#    include "has/gcc/minor.h"
#    define has_builtin_bswap32 has_gcc_minor(4, 3)
#  else
#    error todo
#  endif
#endif
