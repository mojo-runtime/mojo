#ifndef has_cxx_generalized_initializers
#  ifdef __has_feature
#    define has_cxx_generalized_initializers __has_feature(cxx_generalized_initializers)
#  elif defined (__GNUC__)
#    error todo - GCC 4.9
#  else
#    error todo
#  endif
#endif
