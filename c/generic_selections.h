#ifndef has_c_generic_selections
#  ifdef __has_feature
#    define has_c_generic_selections __has_feature(c_generic_selections)
#  elif defined __GNUC__
#    error todo - GCC 4.9
#  else
#    error todo
#  endif
#endif
