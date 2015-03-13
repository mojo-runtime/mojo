#ifndef __unavailable__

#include "__has_attribute.h"

#if !__has_attribute(unavailable)
#  if __has_attribute(error)
#    define __unavailable__(message) __error__(message)
#  else
#    error
#  endif
#endif

#endif
