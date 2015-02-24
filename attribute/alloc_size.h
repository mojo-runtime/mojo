#ifndef has_attribute_alloc_size
#  ifdef __has_attribute
#    define has_attribute_alloc_size __has_attribute(__alloc_size__)
#  elif defined __GNUC__
#    include "has/gcc/minor.h"
#    define has_attribute_alloc_size has_gcc_minor(4, 3)
#  else
#    error todo
#  endif
#endif
