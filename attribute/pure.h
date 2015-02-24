#ifndef has_attribute_pure
#  ifdef __has_attribute
#    define has_attribute_pure __has_attribute(__pure__)
#  elif defined (__GNUC__)
#    define has_attribute_pure 1 /* assuming */
#  else
#    error todo
#  endif
#endif
