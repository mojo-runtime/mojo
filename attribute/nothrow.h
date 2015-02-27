#ifndef attribute_nothrow
#  include "has/attribute/nothrow.h"
#  if has_attribute_nothrow
#    define attribute_nothrow __attribute__((__nothrow__))
#  else
#    include "has/cxx/exceptions.h"
#    if has_cxx_exceptions
#      error
#    endif
#  endif
#endif
