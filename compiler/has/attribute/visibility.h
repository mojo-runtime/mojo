#ifndef compiler_has_attribute_visibility
#  ifdef __has_attribute
#    define compiler_has_attribute_visibility __has_attribute(__visibility__)
#  elif defined __GNUC__
#    define compiler_has_attribute_visibility 1 /* assuming */
#  else
#    error todo
#  endif
#endif
