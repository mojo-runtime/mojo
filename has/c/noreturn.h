#ifndef x_has_c_noreturn
#  ifdef __has_feature
#    define x_has_c_noreturn __has_feature(c_noreturn)
#  elif defined (__GNUC__)
#    error todo - GCC 4.7
#  else
#    error todo
#  endif
#endif
