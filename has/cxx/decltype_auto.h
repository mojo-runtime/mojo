#ifndef has_cxx_decltype_auto
#  ifdef __has_feature
#    define has_cxx_decltype_auto __has_feature(cxx_decltype_auto)
#  elif defined __GNUC__
#    include "has/_gnuc/minor.h"
#    define has_cxx_decltype_auto _has_gnuc_minor(4, 9)
#  else
#    error todo
#  endif
#endif
