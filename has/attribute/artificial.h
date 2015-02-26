#ifndef has_attribute_artificial
#  ifdef __has_attribute
#    define has_attribute_artificial __has_attribute(__artificial__)
#  elif defined __GNUC__
#    include "has/_gnuc/minor.h"
#    define has_attribute_artificial _has_gnuc_minor(4, 3)
#  else
#    error todo
#  endif
#endif
