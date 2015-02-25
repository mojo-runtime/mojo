#ifndef compiler_has_attribute_artificial
#  ifdef __has_attribute
#    define compiler_has_attribute_artificial __has_attribute(__artificial__)
#  elif defined __GNUC__
#    include "compiler/has/gcc/minor.h"
#    define compiler_has_attribute_artificial has_gcc_minor(4, 3)
#  else
#    error todo
#  endif
#endif
