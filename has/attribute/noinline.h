#ifndef has_attribute_noinline
#  ifdef __has_attribute
#    define has_attribute_noinline __has_attribute(__noinline__)
#  elif defined __GNUC__
#    include "has/_gnuc/minor.h"
#    define has_attribute_noinline _has_gnuc_minor(3, 1)
#  else
#    error todo
#  endif
#endif
