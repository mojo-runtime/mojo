#ifndef has_c_generic_selections
#  ifdef __has_feature
#    define has_c_generic_selections __has_feature(c_generic_selections)
#  elif defined __GNUC__
#    include "has/_gnuc/minor.h"
#    define has_c_generic_selections _has_gnuc_minor(4, 9)
#  else
#    error todo
#  endif
#endif
