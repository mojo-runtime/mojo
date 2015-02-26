#ifndef has_c_alignas
#  ifdef __has_feature
#    define has_c_alignas __has_feature(c_alignas)
#  elif defined __GNUC__
#    include "has/_gnuc/minor.h"
#    define has_c_alignas _has_gnuc_minor(4, 7)
#  else
#    error todo
#  endif
#endif
