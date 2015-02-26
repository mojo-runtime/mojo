#ifndef compiler_has_attribute_artificial
#  ifdef __has_attribute
#    define compiler_has_attribute_artificial __has_attribute(__artificial__)
#  elif defined __GNUC__
#    include "compiler/has/gnuc/minor.h"
#    define compiler_has_attribute_artificial compiler_has_gnuc_minor(4, 3)
#  else
#    error todo
#  endif
#endif
