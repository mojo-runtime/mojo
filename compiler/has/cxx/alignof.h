#ifndef compiler_has_cxx_alignof
#  ifdef __has_feature
#    define compiler_has_cxx_alignof __has_feature(cxx_alignof)
#  elif defined __GNUC__
#    include "compiler/has/gnuc/minor.h"
#    define compiler_has_cxx_alignof compiler_has_gnuc_minor(4, 8)
#  else
#    error todo
#  endif
#endif
