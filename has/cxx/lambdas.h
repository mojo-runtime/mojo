#ifndef x_has_cxx_lambdas
#  ifdef __has_feature
#    define x_has_cxx_lambdas __has_feature(cxx_lambdas)
#  elif defined (__GNUC__)
#    error todo - GCC 4.5
#  else
#    error todo
#  endif
#endif
