#ifndef compiler_has_attribute_pure
#  ifdef __has_attribute
#    define compiler_has_attribute_pure __has_attribute(__pure__)
#  elif defined __GNUC__
#    include "compiler/has/gcc/minor.h"
#    define compiler_has_attribute_pure has_gcc_minor(2, 96)
#  else
#    error todo
#  endif
#endif
