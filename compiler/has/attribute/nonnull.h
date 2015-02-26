#ifndef compiler_has_attribute_nonnull
#  ifdef __has_attribute
#    define compiler_has_attribute_nonnull __has_attribute(__nonnull__)
#  elif defined __GNUC__
#    include "compiler/has/gnuc/minor.h"
#    define compiler_has_attribute_nonnull compiler_has_gnuc_minor(3, 3)
#  else
#    error todo
#  endif
#endif
