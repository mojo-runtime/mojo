#ifndef has_attribute_used
#  ifdef __has_attribute
#    define has_attribute_used __has_attribute(__used__)
#  else
#    error todo
#  endif
#endif
