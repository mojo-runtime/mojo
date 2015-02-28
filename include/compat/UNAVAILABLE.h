#ifndef UNAVAILABLE

#include "feature/has_attribute_unavailable_with_message.h"

#if has_attribute_unavailable_with_message
#  define UNAVAILABLE(message) __attribute__((__unavailable__(message)))
#else
#  include "feature/has_attribute_error.h"
#  if has_attribute_error
#    define UNAVAILABLE(message) __attribute__((__error__(message)))
#  else
#    error
#  endif
#endif

#endif
