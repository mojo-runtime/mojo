#ifndef static_assert
#  include "compiler/has/c/static_assert.h"
#  if compiler_has_c_static_assert
#    define static_assert _Static_assert
#  else
#    include "compiler/has/cxx/static_assert.h"
#    if !compiler_has_cxx_static_assert
#      error
#    endif
#  endif
#endif
