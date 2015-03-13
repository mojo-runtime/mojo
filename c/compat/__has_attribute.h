#ifndef __has_attribute

#if defined(__GNUC__)
#  include "_gnuc/has_attribute!.h"
#  define __has_attribute(x) _gnuc_has_attribute(x)
#else
#  error
#endif

#endif
