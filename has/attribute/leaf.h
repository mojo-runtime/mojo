#ifndef has_attribute_leaf
#  ifdef __has_attribute
#    define has_attribute_leaf __has_attribute(__leaf__)
#  elif defined __GNUC__
#    include "has/gnuc/minor.h"
#    define has_attribute_leaf has_gnuc_minor(4, 6)
#  else
#    error todo
#  endif
#endif
