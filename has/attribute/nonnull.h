#ifndef x_has_attribute_nonnull
#  ifdef __has_attribute
#    define x_has_attribute_nonnull __has_attribute(__nonnull__)
#  elif defined (__GNUC__)
#    define x_has_attribute_nonnull 1 /* assuming */
#  else
#    error todo
#  endif
#endif
