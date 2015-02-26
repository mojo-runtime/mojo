#ifndef has_attribute_deprecated
#  ifdef __has_attribute
#    define has_attribute_deprecated __has_attribute(__deprecated__)
#  elif defined __GNUC__
#    include "has/gnuc/minor.h"
#    define has_attribute_deprecated has_gnuc_minor(3, 2)
#  else
#    error todo
#  endif
#endif
