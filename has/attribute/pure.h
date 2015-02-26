#ifndef has_attribute_pure
#  ifdef __has_attribute
#    define has_attribute_pure __has_attribute(__pure__)
#  elif defined __GNUC__
#    include "has/_gnuc/minor.h"
#    define has_attribute_pure _has_gnuc_minor(2, 96)
#  else
#    error todo
#  endif
#endif
