#ifndef has_attribute_nonnull
#  ifdef __has_attribute
#    define has_attribute_nonnull __has_attribute(__nonnull__)
#  elif defined __GNUC__
#    include "has/_gnuc/minor.h"
#    define has_attribute_nonnull _has_gnuc_minor(3, 3)
#  else
#    error todo
#  endif
#endif
