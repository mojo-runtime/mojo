#ifndef compiler_has_attribute_warn_unused_result
#  ifdef __has_attribute
#    define compiler_has_attribute_warn_unused_result __has_attribute(__warn_unused_result__)
#  elif defined __GNUC__
#    include "compiler/has/_gnuc/minor.h"
#    define compiler_has_attribute_warn_unused_result _compiler_has_gnuc_minor(3, 4)
#  else
#    error todo
#  endif
#endif
