#ifndef has_cxx_attributes
#  ifdef __has_feature
#    define has_cxx_attributes __has_feature(cxx_attributes)
#  elif defined __GNUC__
#    include "has/_gnuc/minor.h"
#    define has_cxx_attributes _has_gnuc_minor(4, 8)
#  else
#    error todo
#  endif
#endif
