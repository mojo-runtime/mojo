#ifndef compiler_has_attribute_weak
#  ifdef __has_attribute
#    define compiler_has_attribute_weak __has_attribute(__weak__)
#  elif defined __GNUC__
#    define compiler_has_attribute_weak 1 /* assuming */
#  else
#    error todo
#  endif
#endif
