#ifndef has_attribute_nonnull
#  ifdef __has_attribute
#    define has_attribute_nonnull __has_attribute(__nonnull__)
#  else
#    error todo
#  endif
#endif
