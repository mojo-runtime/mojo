#ifndef has_attribute_deprecated
#  ifdef __has_attribute
#    define has_attribute_deprecated __has_attribute(__deprecated__)
#  elif defined __GNUC__
#    include "has/gcc/minor.h"
#    define has_attribute_deprecated has_gcc_minor(3, 2)
#  else
#    error todo
#  endif
#endif
