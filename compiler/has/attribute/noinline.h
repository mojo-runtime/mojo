#ifndef compiler_has_attribute_noinline
#  ifdef __has_attribute
#    define compiler_has_attribute_noinline __has_attribute(__noinline__)
#  elif defined __GNUC__
#    include "compiler/has/gcc/minor.h"
#    define compiler_has_attribute_noinline has_gcc_minor(3, 1)
#  else
#    error todo
#  endif
#endif
