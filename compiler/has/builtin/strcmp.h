#ifndef compiler_has_builtin_strcmp
#  ifdef __has_builtin
#    define compiler_has_builtin_strcmp __has_builtin(__builtin_strcmp)
#  elif defined __GNUC__
#    include "compiler/has/_gnuc/minor.h"
#    define compiler_has_builtin_strcmp _compiler_has_gnuc_minor(3, 2)
#  else
#    error todo
#  endif
#endif
