#ifndef x_has_cxx_alignof
#  ifdef __has_feature
#    define x_has_cxx_alignof __has_feature(cxx_alignof)
#  elif defined (__GNUC__)
#    error todo - GCC 4.8
#  else
#    error todo
#  endif
#endif
