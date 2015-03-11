#ifndef __unavailable__

#include "has_attribute_unavailable_with_message.h"

#if !has_attribute_unavailable_with_message
#  include "has_attribute_error.h"
#  if has_attribute_error
#    define __unavailable__(message) __error__(message)
#  else
#    error
#  endif
#endif

#endif
