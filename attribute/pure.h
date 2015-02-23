#ifndef has_attribute_pure
#  ifdef __has_attribute
#    define has_attribute_pure __has_attribute(__pure__)
#  else
#    error todo
#  endif
#endif
