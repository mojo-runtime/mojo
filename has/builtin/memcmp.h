#ifndef has_builtin_memcmp
#  ifdef __has_builtin
#    define has_builtin_memcmp __has_builtin(__builtin_memcmp)
#  elif defined __GNUC__
#    include "has/_gnuc/minor.h"
#    define has_builtin_memcmp _has_gnuc_minor(2, 91)
#  else
#    error todo
#  endif
#endif
