#ifndef compiler_has_cxx_generalized_initializers
#  ifdef __has_feature
#    define compiler_has_cxx_generalized_initializers __has_feature(cxx_generalized_initializers)
#  elif defined __GNUC__
#    include "compiler/has/gcc/minor.h"
#    define compiler_has_cxx_generalized_initializers has_gcc_minor(4, 9)
#  else
#    error todo
#  endif
#endif
