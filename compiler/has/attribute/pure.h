#ifndef compiler_has_attribute_pure
#  ifdef __has_attribute
#    define compiler_has_attribute_pure __has_attribute(__pure__)
#  elif defined __GNUC__
#    include "compiler/has/gnuc/minor.h"
#    define compiler_has_attribute_pure compiler_has_gnuc_minor(2, 96)
#  else
#    error todo
#  endif
#endif
