#ifndef has_cxx_nullptr
#  ifdef __has_feature
#    define has_cxx_nullptr __has_feature(cxx_nullptr)
#  elif defined (__GNUC__)
#    error todo - GCC 4.6
#  else
#    error todo
#  endif
#endif
