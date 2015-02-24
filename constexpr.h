#ifndef x_constexpr
#  include "has/cxx/relaxed_constexpr.h"
#  if x_has_cxx_relaxed_constexpr
#    define x_constexpr constexpr
#  else
#    include "has/attribute/const.h"
#    if x_has_attribute_const
#      define x_constexpr __attribute__((__const__))
#    else
#      error todo
#    endif
#  endif
#endif
