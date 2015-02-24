#ifndef x_decltype
#  include "has/cxx/decltype.h"
#  if x_has_cxx_decltype
#    define x_decltype decltype
#  else
#    error todo
#  endif
#endif
