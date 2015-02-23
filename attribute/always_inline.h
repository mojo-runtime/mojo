#ifndef has_attribute_always_inline
#  ifdef __has_attribute
#    define has_attribute_always_inline __has_attribute(__always_inline__)
#  else
#    error todo
#  endif
#endif
