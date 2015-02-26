#ifndef compiler_has_attribute_noinline
#  ifdef __has_attribute
#    define compiler_has_attribute_noinline __has_attribute(__noinline__)
#  elif defined __GNUC__
#    include "compiler/has/gnuc/minor.h"
#    define compiler_has_attribute_noinline compiler_has_gnuc_minor(3, 1)
#  else
#    error todo
#  endif
#endif
