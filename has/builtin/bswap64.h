#ifndef has_builtin_bswap64
#  ifdef __has_builtin
#    define has_builtin_bswap64 __has_builtin(__builtin_bswap64)
#  elif defined __GNUC__
#    include "has/_gnuc/minor.h"
#    define has_builtin_bswap64 _has_gnuc_minor(4, 3)
#  else
#    error todo
#  endif
#endif
