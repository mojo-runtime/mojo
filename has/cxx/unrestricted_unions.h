#ifndef has_cxx_unrestricted_unions
#  ifdef __has_feature
#    define has_cxx_unrestricted_unions __has_feature(cxx_unrestricted_unions)
#  elif defined __GNUC__
#    include "has/_gnuc/minor.h"
#    define has_cxx_unrestricted_unions _has_gnuc_minor(4, 6)
#  else
#    error todo
#  endif
#endif
