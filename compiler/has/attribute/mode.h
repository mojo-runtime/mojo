#ifndef compiler_has_attribute_mode
#  ifdef __has_attribute
#    define compiler_has_attribute_mode __has_attribute(__mode__)
#  elif defined __GNUC__
#    define compiler_has_attribute_mode 1 /* assuming */
#  else
#    error todo
#  endif
#endif
