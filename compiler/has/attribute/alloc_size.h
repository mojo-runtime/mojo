#ifndef compiler_has_attribute_alloc_size
#  ifdef __has_attribute
#    define compiler_has_attribute_alloc_size __has_attribute(__alloc_size__)
#  elif defined __GNUC__
#    include "compiler/has/gcc/minor.h"
#    define compiler_has_attribute_alloc_size has_gcc_minor(4, 3)
#  else
#    error todo
#  endif
#endif
