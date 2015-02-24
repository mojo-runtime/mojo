#ifndef x_has_cxx_unrestricted_unions
#  ifdef __has_feature
#    define x_has_cxx_unrestricted_unions __has_feature(cxx_unrestricted_unions)
#  elif defined (__GNUC__)
#    error todo - GCC 4.6
#  else
#    error todo
#  endif
#endif
