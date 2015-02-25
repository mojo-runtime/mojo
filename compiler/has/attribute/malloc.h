#ifndef compiler_has_attribute_malloc
#  ifdef __has_attribute
#    define compiler_has_attribute_malloc __has_attribute(__malloc__)
#  elif defined __GNUC__
#    include "compiler/has/_gnuc/minor.h"
#    define compiler_has_attribute_malloc _compiler_has_gnuc_minor(2, 96)
#  else
#    error todo
#  endif
#endif
