#ifndef compiler_has_cxx_defaulted_functions
#  ifdef __has_feature
#    define compiler_has_cxx_defaulted_functions __has_feature(cxx_defaulted_functions)
#  elif defined __GNUC__
#    include "compiler/has/gnuc/minor.h"
#    define compiler_has_cxx_defaulted_functions compiler_has_gnuc_minor(4, 4)
#  else
#    error todo
#  endif
#endif
