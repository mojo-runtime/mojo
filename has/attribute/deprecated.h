#ifndef compiler_has_attribute_deprecated
#  ifdef __has_attribute
#    define compiler_has_attribute_deprecated __has_attribute(__deprecated__)
#  elif defined __GNUC__
#    include "compiler/has/gcc/minor.h"
#    define compiler_has_attribute_deprecated has_gcc_minor(3, 2)
#  else
#    error todo
#  endif
#endif
