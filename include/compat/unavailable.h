#ifndef unavailable

#include "feature/has_attribute_unavailable_with_message.h"

#if !has_attribute_unavailable_with_message
#  include "feature/has_attribute_error.h"
#  if has_attribute_error
#    define unavailable(message) __error__(message)
#  else
#    error
#  endif
#endif

#endif
