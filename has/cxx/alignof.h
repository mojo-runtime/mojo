#ifndef has_cxx_alignof
#  ifdef __has_feature
#    define has_cxx_alignof __has_feature(cxx_alignof)
#  elif defined __GNUC__
#    include "has/_gnuc/minor.h"
#    define has_cxx_alignof _has_gnuc_minor(4, 8)
#  else
#    error todo
#  endif
#endif
