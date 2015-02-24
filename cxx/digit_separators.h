#ifndef has_cxx_digit_separators
#  ifdef __has_feature
#    define has_cxx_digit_separators __has_feature(cxx_digit_separators)
#  elif defined __GNUC__
#    error todo - 4.9 (N3797)
#  else
#    error todo
#  endif
#endif
