#ifndef has_attribute_nothrow

#if defined(__has_attribute)
#  define has_attribute_nothrow (__has_attribute(__nothrow__))
#elif defined(__GNUC__)
#  include "_gnuc/has_version!.h"
#  define has_attribute_nothrow _gnuc_has_version(3, 3)
#else
#  error
#endif

#endif
