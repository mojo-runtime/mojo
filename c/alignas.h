#ifndef has_c_alignas
#  ifdef __has_feature
#    define has_c_alignas __has_feature(c_alignas)
#  elif defined (__GNUC__)
#    error todo - GCC 4.7
#  else
#    error todo
#  endif
#endif
