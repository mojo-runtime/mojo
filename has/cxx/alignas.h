#ifndef x_has_cxx_alignas
#  ifdef __has_feature
#    define x_has_cxx_alignas __has_feature(cxx_alignas)
#  elif defined (__GNUC__)
#    error todo - GCC 4.8
#  else
#    error todo
#  endif
#endif
