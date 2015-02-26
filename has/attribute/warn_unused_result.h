#ifndef has_attribute_warn_unused_result
#  ifdef __has_attribute
#    define has_attribute_warn_unused_result __has_attribute(__warn_unused_result__)
#  elif defined __GNUC__
#    include "has/_gnuc/minor.h"
#    define has_attribute_warn_unused_result _has_gnuc_minor(3, 4)
#  else
#    error todo
#  endif
#endif
