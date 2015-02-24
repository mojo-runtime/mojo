#ifndef has_attribute_nothrow
#  ifdef __has_attribute
#    define has_attribute_nothrow __has_attribute(__nothrow__)
#  elif defined (__GNUC__)
#    define has_attribute_nothrow 1 /* assuming */
#  else
#    error todo
#  endif
#endif
