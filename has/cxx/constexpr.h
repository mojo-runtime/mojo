#ifndef x_has_cxx_constexpr
#  ifdef __has_feature
#    define x_has_cxx_constexpr __has_feature(cxx_constexpr)
#  elif defined (__GNUC__)
#    error todo - GCC 4.6
#  else
#    error todo
#  endif
#endif
