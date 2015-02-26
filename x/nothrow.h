#ifndef x_nothrow
#  include "compiler/has/attribute/nothrow.h"
#  if compiler_has_attribute_nothrow
#    define x_nothrow __attribute__((__nothrow__))
#  else
#    include "compiler/has/cxx/exceptions.h"
#    if compiler_has_cxx_exceptions
#      error
#    endif
#  endif
#endif
