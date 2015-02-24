#ifndef has_cxx_decltype
#  ifdef __has_feature
#    define has_cxx_decltype __has_feature(cxx_decltype)
#  elif defined __GNUC__
#    error todo - GCC 4.8.1
#  else
#    error todo
#  endif
#endif
