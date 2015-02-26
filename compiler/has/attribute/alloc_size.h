#ifndef compiler_has_attribute_alloc_size
#  ifdef __has_attribute
#    define compiler_has_attribute_alloc_size __has_attribute(__alloc_size__)
#  elif defined __GNUC__
#    include "compiler/has/gnuc/minor.h"
#    define compiler_has_attribute_alloc_size compiler_has_gnuc_minor(4, 3)
#  else
#    error todo
#  endif
#endif
