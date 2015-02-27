#ifndef has_builtin_strcmp
#  ifdef __has_builtin
#    define has_builtin_strcmp __has_builtin(__builtin_strcmp)
#  elif defined __GNUC__
#    include "has/gnuc/minor.h"
#    define has_builtin_strcmp has_gnuc_minor(3, 2)
#  else
#    error todo
#  endif
#endif
