#ifndef x_has_cxx_decltype_auto
#  ifdef __has_feature
#    define x_has_cxx_decltype_auto __has_feature(cxx_decltype_auto)
#  elif defined (__GNUC__)
#    error todo - GCC 4.9
#  else
#    error todo
#  endif
#endif
