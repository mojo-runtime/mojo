#ifndef has_c_alignof
#  ifdef __has_feature
#    define has_c_alignof __has_feature(c_alignof)
#  elif defined __GNUC__
#    include "has/_gnuc/minor.h"
#    define has_c_alignof _has_gnuc_minor(4, 7)
#  else
#    error todo
#  endif
#endif
