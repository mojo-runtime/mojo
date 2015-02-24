#ifndef x_has_attribute_always_inline
#  ifdef __has_attribute
#    define x_has_attribute_always_inline __has_attribute(__always_inline__)
#  elif defined (__GNUC__)
#    define x_has_attribute_always_inline 1 /* assuming */
#  else
#    error todo
#  endif
#endif
