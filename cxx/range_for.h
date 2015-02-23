#ifndef has_cxx_range_for
#  ifdef __has_feature
#    define has_cxx_range_for __has_feature(cxx_range_for)
#  elif defined (__GNUC__)
#    error todo - GCC 4.6
#  else
#    error todo
#  endif
#endif
