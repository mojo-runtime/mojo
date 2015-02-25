#ifndef compiler_has_attribute_error
#  ifdef __has_attribute
#    define compiler_has_attribute_error __has_attribute(__error__)
#  elif defined __GNUC__
#    include "compiler/has/gcc/minor.h"
#    define compiler_has_attribute_error has_gcc_minor(4, 3)
#  else
#    error todo
#  endif
#endif
