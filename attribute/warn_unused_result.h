#ifndef has_attribute_warn_unused_result
#  ifdef __has_attribute
#    define has_attribute_warn_unused_result __has_attribute(__warn_unused_result__)
#  elif defined __GNUC__
#    include "has/gcc/minor.h"
#    define has_attribute_warn_unused_result has_gcc_minor(3, 4)
#  else
#    error todo
#  endif
#endif
