#ifndef has_cxx_generalized_initializers
#  ifdef __has_feature
#    define has_cxx_generalized_initializers __has_feature(cxx_generalized_initializers)
#  elif defined __GNUC__
#    include "has/gcc/minor.h"
#    define has_cxx_generalized_initializers has_gcc_minor(4, 9)
#  else
#    error todo
#  endif
#endif
