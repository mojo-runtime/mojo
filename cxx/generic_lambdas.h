#ifndef has_cxx_generic_lambdas
#  ifdef __has_feature
#    define has_cxx_generic_lambdas __has_feature(cxx_generic_lambdas)
#  elif defined (__GNUC__)
#    error todo - GCC 4.9
#  else
#    error todo
#  endif
#endif
