#ifndef compiler_has_attribute_always_inline
#  ifdef __has_attribute
#    define compiler_has_attribute_always_inline __has_attribute(__always_inline__)
#  elif defined __GNUC__
#    include "compiler/has/gnuc/minor.h"
#    define compiler_has_attribute_always_inline compiler_has_gnuc_minor(3, 2)
#  else
#    error todo
#  endif
#endif
