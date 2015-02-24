#ifndef x_has_cxx_auto_type
#  ifdef __has_feature
#    define x_has_cxx_auto_type __has_feature(cxx_auto_type)
#  elif defined (__GNUC__)
#    error todo - GCC 4.4
#  else
#    error todo
#  endif
#endif
