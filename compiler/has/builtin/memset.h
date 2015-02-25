#ifndef compiler_has_builtin_memset
#  ifdef __has_builtin
#    define compiler_has_builtin_memset __has_builtin(__builtin_memset)
#  elif defined __GNUC__
#    include "compiler/has/_gnuc/minor.h"
#    define compiler_has_builtin_memset _compiler_has_gnuc_minor(2, 91)
#  else
#    error todo
#  endif
#endif
