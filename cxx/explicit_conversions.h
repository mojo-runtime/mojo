#ifndef has_cxx_explicit_conversions
#  ifdef __has_feature
#    define has_cxx_explicit_conversions __has_feature(cxx_explicit_conversions)
#  elif defined (__GNUC__)
#    error todo - GCC 4.5
#  else
#    error todo
#  endif
#endif
