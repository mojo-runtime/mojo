#ifndef _c_constexpr
#  include "has/cxx/relaxed_constexpr.h"
#  if has_cxx_relaxed_constexpr
#    define _c_constexpr constexpr
#  else
#    define _c_constexpr
#  endif
#endif
