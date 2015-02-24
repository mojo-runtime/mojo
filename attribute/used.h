#ifndef has_attribute_used
#  ifdef __has_attribute
#    define has_attribute_used __has_attribute(__used__)
#  elif defined __GNUC__
#    define has_attribute_used 1 /* assuming */
#  else
#    error todo
#  endif
#endif
