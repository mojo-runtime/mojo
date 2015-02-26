#ifndef compiler_has_cxx_generalized_initializers
#  ifdef __has_feature
#    define compiler_has_cxx_generalized_initializers __has_feature(cxx_generalized_initializers)
#  elif defined __GNUC__
#    include "compiler/has/gnuc/minor.h"
#    define compiler_has_cxx_generalized_initializers compiler_has_gnuc_minor(4, 9)
#  else
#    error todo
#  endif
#endif
