#ifndef x_noexcept
#  include "has/cxx/exceptions.h"
#  if !x_has_cxx_exceptions
#    define x_noexcept
#  else
#    include "has/cxx/noexcept.h"
#    if x_has_cxx_noexcept
#      define x_noexcept noexcept
#    else
#      error todo
#    endif
#  endif
#endif
