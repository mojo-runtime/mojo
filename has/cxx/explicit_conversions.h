#ifndef has_cxx_explicit_conversions
#  ifdef __has_feature
#    define has_cxx_explicit_conversions __has_feature(cxx_explicit_conversions)
#  elif defined __GNUC__
#    include "has/_gnuc/minor.h"
#    define has_cxx_explicit_conversions _has_gnuc_minor(4, 5)
#  else
#    error todo
#  endif
#endif
