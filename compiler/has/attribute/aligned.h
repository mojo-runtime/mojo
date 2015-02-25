#ifndef compiler_has_attribute_aligned
#  ifdef __has_attribute
#    define compiler_has_attribute_aligned __has_attribute(__aligned__)
#  elif defined __GNUC__
#    define compiler_has_attribute_aligned 1 /* assuming */
#  else
#    error todo
#  endif
#endif
