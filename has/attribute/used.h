#ifndef has_attribute_used
#  ifdef __has_attribute
#    define has_attribute_used __has_attribute(__used__)
#  elif defined __GNUC__
#    include "has/gnuc/minor.h"
#    define has_attribute_used has_gnuc_minor(3, 1)
#  else
#    error todo
#  endif
#endif
