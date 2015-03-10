#ifndef has_attribute_nothrow

#if defined(__has_attribute)
#  define has_attribute_nothrow (__has_attribute(__nothrow__))
#elif defined(__GNUC__)
#  include "_has_gnuc_minor.h"
#  define has_attribute_nothrow _has_gnuc_minor(3, 3)
#else
#  error
#endif

#endif
