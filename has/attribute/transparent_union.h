#ifndef compiler_has_attribute_transparent_union
#  ifdef __has_attribute
#    define compiler_has_attribute_transparent_union __has_attribute(__transparent_union__)
#  elif defined __GNUC__
#    define compiler_has_attribute_transparent_union 1 /* assuming */
#  else
#    error todo
#  endif
#endif
