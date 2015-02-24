#ifndef has_attribute_const
#  ifdef __has_attribute
#    define has_attribute_const __has_attribute(__const__)
#  elif defined __GNUC__
#    define has_attribute_const 1 /* assuming */
#  else
#    error todo
#  endif
#endif
