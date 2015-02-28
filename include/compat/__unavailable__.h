#ifndef __unavailable__

#include "feature/has_attribute_unavailable_with_message.h"

#if !has_attribute_unavailable_with_message
#  include "feature/has_attribute_error.h"
#  if has_attribute_error
#    define __unavailable__ __error__
#  else
#    error
#  endif
#endif

#endif
