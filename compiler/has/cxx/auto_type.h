#ifndef compiler_has_cxx_auto_type
#  ifdef __has_feature
#    define compiler_has_cxx_auto_type __has_feature(cxx_auto_type)
#  elif defined __GNUC__
#    include "compiler/has/gnuc/minor.h"
#    define compiler_has_cxx_auto_type compiler_has_gnuc_minor(4, 4)
#  else
#    error todo
#  endif
#endif
