#ifndef x_has_cxx_raw_string_literals
#  ifdef __has_feature
#    define x_has_cxx_raw_string_literals __has_feature(cxx_raw_string_literals)
#  elif defined (__GNUC__)
#    error todo - GCC 4.5
#  else
#    error todo
#  endif
#endif
