#ifndef has_cxx_attributes
#  ifdef __has_feature
#    define has_cxx_attributes __has_feature(cxx_attributes)
#  elif defined __GNUC__
#    error todo - GCC 4.8
#  else
#    error todo
#  endif
#endif
