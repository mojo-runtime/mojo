#ifndef has_cxx_alignas
#  ifdef __has_feature
#    define has_cxx_alignas __has_feature(cxx_alignas)
#  elif defined __GNUC__
#    include "has/_gnuc/minor.h"
#    define has_cxx_alignas _has_gnuc_minor(4, 8)
#  else
#    error todo
#  endif
#endif
