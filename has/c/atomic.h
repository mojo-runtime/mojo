#ifndef x_has_c_atomic
#  ifdef __has_feature
#    define x_has_c_atomic __has_feature(c_atomic)
#  elif defined (__GNUC__)
#    error todo - GCC 4.9
#  else
#    error todo
#  endif
#endif
