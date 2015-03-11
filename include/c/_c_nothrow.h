#ifndef _c_nothrow

#include "compat/has_attribute_nothrow.h"

#if has_attribute_nothrow
#  define _c_nothrow __attribute__((__nothrow__))
#else
#  include "has/cxx/exceptions.h"
#  if has_cxx_exceptions
#    error
#  else
#    define _c_nothrow
#  endif
#endif

#endif
