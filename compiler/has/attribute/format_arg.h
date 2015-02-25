#ifndef compiler_has_attribute_format_arg
#  ifdef __has_attribute
#    define compiler_has_attribute_format_arg __has_attribute(__format_arg__)
#  elif defined __GNUC__
#    include "compiler/has/_gnuc/minor.h"
#    define compiler_has_attribute_format_arg _compiler_has_gnuc_minor(2, 8)
#  else
#    error todo
#  endif
#endif
