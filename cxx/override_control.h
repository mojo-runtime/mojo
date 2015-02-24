#ifndef has_cxx_override_control
#  ifdef __has_feature
#    define has_cxx_override_control __has_feature(cxx_override_control)
#  elif defined (__GNUC__)
#    error todo - GCC 4.7
#  else
#    error todo
#  endif
#endif
