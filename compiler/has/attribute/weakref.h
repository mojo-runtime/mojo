#ifndef compiler_has_attribute_weakref
#  ifdef __has_attribute
#    define compiler_has_attribute_weakref __has_attribute(__weakref__)
#  elif defined __GNUC__
#    define compiler_has_attribute_weakref 1 /* assuming */
#  else
#    error todo
#  endif
#endif
