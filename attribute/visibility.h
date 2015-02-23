#ifndef has_attribute_visibility
#  ifdef __has_attribute
#    define has_attribute_visibility __has_attribute(__visibility__)
#  else
#    error todo
#  endif
#endif
