#ifndef compiler_has_attribute_nothrow
#  ifdef __has_attribute
#    define compiler_has_attribute_nothrow __has_attribute(__nothrow__)
#  elif defined __GNUC__
#    include "compiler/has/gnuc/minor.h"
#    define compiler_has_attribute_nothrow compiler_has_gnuc_minor(3, 3)
#  else
#    error todo
#  endif
#endif
