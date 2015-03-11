#ifndef x_nothrow

#include "has_attribute_nothrow.h"

#if has_attribute_nothrow
#  define x_nothrow __attribute__((__nothrow__))
#else
#  include "has_cxx_exceptions.h"
#  if has_cxx_exceptions
#    error
#  else
#    define x_nothrow
#  endif
#endif

#endif
