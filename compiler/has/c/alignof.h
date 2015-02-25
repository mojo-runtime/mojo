#ifndef compiler_has_c_alignof
#  ifdef __has_feature
#    define compiler_has_c_alignof __has_feature(c_alignof)
#  elif defined __GNUC__
#    include "compiler/has/_gnuc/minor.h"
#    define compiler_has_c_alignof _compiler_has_gnuc_minor(4, 7)
#  else
#    error todo
#  endif
#endif
