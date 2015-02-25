#ifndef compiler_has_attribute_warning
#  ifdef __has_attribute
#    define compiler_has_attribute_warning __has_attribute(__warning__)
#  elif defined __GNUC__
#    include "compiler/has/gcc/minor.h"
#    define compiler_has_attribute_warning has_gcc_minor(4, 3)
#  else
#    error todo
#  endif
#endif
