#ifndef has_attribute_aligned
#  ifdef __has_attribute
#    define has_attribute_aligned __has_attribute(__aligned__)
#  else
#    error todo
#  endif
#endif
