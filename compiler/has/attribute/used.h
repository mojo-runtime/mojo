#ifndef compiler_has_attribute_used
#  ifdef __has_attribute
#    define compiler_has_attribute_used __has_attribute(__used__)
#  elif defined __GNUC__
#    include "compiler/has/gcc/minor.h"
#    define compiler_has_attribute_used has_gcc_minor(3, 1)
#  else
#    error todo
#  endif
#endif