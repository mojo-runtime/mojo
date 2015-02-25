#ifndef compiler_has_attribute_noreturn
#  ifdef __has_attribute
#    define compiler_has_attribute_noreturn __has_attribute(__noreturn__)
#  elif defined __GNUC__
#    define compiler_has_attribute_noreturn 1 /* assuming */
#  else
#    error todo
#  endif
#endif
