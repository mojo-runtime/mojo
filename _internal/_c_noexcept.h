#ifndef _c_noexcept
#  include "has/cxx/exceptions.h"
#  if has_cxx_exceptions
#    include "has/cxx/noexcept.h"
#    if has_cxx_noexcept
#      define _c_noexcept noexcept
#    else
#      error
#    endif
#  endif
#endif
