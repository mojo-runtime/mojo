#ifndef has_attribute_warning
#  ifdef __has_attribute
#    define has_attribute_warning __has_attribute(__warning__)
#  elif defined __GNUC__
#    include "has/gnuc/minor.h"
#    define has_attribute_warning has_gnuc_minor(4, 3)
#  else
#    error todo
#  endif
#endif
