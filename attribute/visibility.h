#ifndef has_attribute_visibility
#  ifdef __has_attribute
#    define has_attribute_visibility __has_attribute(__visibility__)
#  elif defined __GNUC__
#    define has_attribute_visibility 1 /* assuming */
#  else
#    error todo
#  endif
#endif
