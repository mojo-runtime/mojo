#ifndef has_attribute_format_arg
#  ifdef __has_attribute
#    define has_attribute_format_arg __has_attribute(__format_arg__)
#  elif defined __GNUC__
#    include "has/gnuc/minor.h"
#    define has_attribute_format_arg has_gnuc_minor(2, 8)
#  else
#    error todo
#  endif
#endif
