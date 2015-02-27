#ifndef has_attribute_const
#  ifdef __has_attribute
#    define has_attribute_const __has_attribute(__const__)
#  elif defined __GNUC__
#    include "has/gnuc/minor.h"
#    define has_attribute_const has_gnuc_minor(2, 5)
#  else
#    error todo
#  endif
#endif
