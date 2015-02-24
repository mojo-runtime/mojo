#ifndef has_attribute_packed
#  ifdef __has_attribute
#    define has_attribute_packed __has_attribute(__packed__)
#  elif defined __GNUC__
#    define has_attribute_packed 1 /* assuming */
#  else
#    error todo
#  endif
#endif
