#ifndef has_attribute_error
#  ifdef __has_attribute
#    define has_attribute_error __has_attribute(__error__)
#  elif defined __GNUC__
#    include "has/_gnuc/minor.h"
#    define has_attribute_error _has_gnuc_minor(4, 3)
#  else
#    error todo
#  endif
#endif
