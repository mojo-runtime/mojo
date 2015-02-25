#ifndef compiler_has_c_atomic
#  ifdef __has_feature
#    define compiler_has_c_atomic __has_feature(c_atomic)
#  elif defined __GNUC__
#    include "compiler/has/_gnuc/minor.h"
#    define compiler_has_c_atomic _compiler_has_gnuc_minor(4, 9)
#  else
#    error todo
#  endif
#endif
