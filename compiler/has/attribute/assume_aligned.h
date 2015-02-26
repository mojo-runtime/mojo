#ifndef compiler_has_attribute_assume_aligned
#  ifdef __has_attribute
#    define compiler_has_attribute_assume_aligned __has_attribute(__assume_aligned__)
#  elif defined __GNUC__
#    define compiler_has_attribute_assume_aligned 1 /* assuming */
#  else
#    error todo
#  endif
#endif
