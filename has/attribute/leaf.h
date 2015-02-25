#ifndef compiler_has_attribute_leaf
#  ifdef __has_attribute
#    define compiler_has_attribute_leaf __has_attribute(__leaf__)
#  elif defined __GNUC__
#    include "compiler/has/gcc/minor.h"
#    define compiler_has_attribute_leaf has_gcc_minor(4, 6)
#  else
#    error todo
#  endif
#endif
