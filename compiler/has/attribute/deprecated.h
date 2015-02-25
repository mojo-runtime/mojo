#ifndef compiler_has_attribute_deprecated
#  ifdef __has_attribute
#    define compiler_has_attribute_deprecated __has_attribute(__deprecated__)
#  elif defined __GNUC__
#    include "compiler/has/_gnuc/minor.h"
#    define compiler_has_attribute_deprecated _compiler_has_gnuc_minor(3, 2)
#  else
#    error todo
#  endif
#endif
