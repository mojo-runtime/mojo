#ifndef static_assert
#  include "has/c/static_assert.h"
#  if has_c_static_assert
#    define static_assert _Static_assert
#  else
#    include "has/cxx/static_assert.h"
#    if !has_cxx_static_assert
#      error
#    endif
#  endif
#endif
