#ifndef x_noexcept
#  include "has/cxx/exceptions.h"
#  if !has_cxx_exceptions
#    define x_noexcept
#  endif
#endif

#ifndef x_noexcept
#  include "has/cxx/noexcept.h"
#  if has_cxx_noexcept
#    define x_noexcept noexcept
#  endif
#endif

#ifndef x_noexcept
#  error
#endif
