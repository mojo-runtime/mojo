#ifndef compiler_has_attribute_nothrow
#  ifdef __has_attribute
#    define compiler_has_attribute_nothrow __has_attribute(__nothrow__)
#  elif defined __GNUC__
#    include "compiler/has/gcc/minor.h"
#    define compiler_has_attribute_nothrow has_gcc_minor(3, 3)
#  else
#    error todo
#  endif
#endif
