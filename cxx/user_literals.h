#ifndef has_cxx_user_literals
#  ifdef __has_feature
#    define has_cxx_user_literals __has_feature(cxx_user_literals)
#  elif defined (__GNUC__)
#    error todo - GCC 4.7
#  else
#    error todo
#  endif
#endif
