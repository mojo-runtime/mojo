#ifndef has_cxx_digit_separators
#  ifdef __has_feature
#    define has_cxx_digit_separators __has_feature(cxx_digit_separators)
#  elif defined __GNUC__
#    include "has/_gnuc/minor.h"
#    define has_cxx_digit_separators _has_gnuc_minor(4, 9) // XXX: N3797?
#  else
#    error todo
#  endif
#endif
