#ifndef has_cxx_generalized_initializers
#  ifdef __has_feature
#    define has_cxx_generalized_initializers __has_feature(cxx_generalized_initializers)
#  elif defined __GNUC__
#    include "has/_gnuc/minor.h"
#    define has_cxx_generalized_initializers _has_gnuc_minor(4, 9)
#  else
#    error todo
#  endif
#endif
