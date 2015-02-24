#ifndef has_c_alignof
#  ifdef __has_feature
#    define has_c_alignof __has_feature(c_alignof)
#  elif defined (__GNUC__)
#    error todo - GCC 4.7
#  else
#    error todo
#  endif
#endif
