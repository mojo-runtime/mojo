#ifndef has_attribute_const
#  ifdef __has_attribute
#    define has_attribute_const __has_attribute(__const__)
#  else
#    error todo
#  endif
#endif
