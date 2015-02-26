#ifndef compiler_has_c_alignas
#  ifdef __has_feature
#    define compiler_has_c_alignas __has_feature(c_alignas)
#  elif defined __GNUC__
#    include "compiler/has/gnuc/minor.h"
#    define compiler_has_c_alignas compiler_has_gnuc_minor(4, 7)
#  else
#    error todo
#  endif
#endif
