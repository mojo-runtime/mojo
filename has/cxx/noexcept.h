#ifndef has_cxx_noexcept
#  ifdef __has_feature
#    define has_cxx_noexcept __has_feature(cxx_noexcept)
#  elif defined __GNUC__
#    include "has/_gnuc/minor.h"
#    define has_cxx_noexcept _has_gnuc_minor(4, 6)
#  else
#    error todo
#  endif
#endif
