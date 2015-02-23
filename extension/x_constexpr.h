#ifndef x_constexpr
#  include "has/cxx/relaxed_constexpr.h"
#  if has_cxx_relaxed_constexpr
#    define x_constexpr constexpr
#  endif
#endif

#ifndef x_constexpr
#  include "has/attribute/const.h"
#  if has_attribute_const
#    define x_constexpr __attribute__((__const__))
#  endif
#endif

#ifndef x_constexpr
#  error
#endif
