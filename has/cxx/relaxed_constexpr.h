#ifndef x_has_cxx_relaxed_constexpr
#  ifdef __has_feature
#    define x_has_cxx_relaxed_constexpr __has_feature(cxx_relaxed_constexpr)
#  elif defined (__GNUC__)
#    error todo - GCC 5
#  else
#    error todo
#  endif
#endif
