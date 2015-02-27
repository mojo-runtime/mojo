#ifndef has_attribute_always_inline
#  ifdef __has_attribute
#    define has_attribute_always_inline __has_attribute(__always_inline__)
#  elif defined __GNUC__
#    include "has/gnuc/minor.h"
#    define has_attribute_always_inline has_gnuc_minor(3, 2)
#  else
#    error todo
#  endif
#endif
