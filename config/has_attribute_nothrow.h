#ifndef has_attribute_nothrow
#  ifdef __has_attribute
#    define has_attribute_nothrow __has_attribute(__nothrow__)
#  elif defined __GNUC__
#    include "has/gnuc/minor.h"
#    define has_attribute_nothrow has_gnuc_minor(3, 3)
#  else
#    error todo
#  endif
#endif
