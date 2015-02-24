#ifndef x_has_c_static_assert
#  ifdef __has_feature
#    define x_has_c_static_assert __has_feature(c_static_assert)
#  elif defined (__GNUC__)
#    error todo - GCC 4.6
#  else
#    error todo
#  endif
#endif
