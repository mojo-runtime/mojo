#ifndef has_cxx_range_for
#  ifdef __has_feature
#    define has_cxx_range_for __has_feature(cxx_range_for)
#  elif defined __GNUC__
#    include "has/gnuc/minor.h"
#    define has_cxx_range_for has_gnuc_minor(4, 6)
#  else
#    error todo
#  endif
#endif
