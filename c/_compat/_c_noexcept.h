#ifndef _c_noexcept
#  include "compiler/has/cxx/exceptions.h"
#  if compiler_has_cxx_exceptions
#    include "compiler/has/cxx/noexcept.h"
#    if compiler_has_cxx_noexcept
#      define _c_noexcept noexcept
#    else
#      error
#    endif
#  endif
#endif
