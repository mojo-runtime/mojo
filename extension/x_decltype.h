#ifndef x_decltype
#  include "has/cxx/decltype.h"
#  if has_cxx_decltype
#    define x_decltype decltype
#  endif
#endif

#ifndef x_decltype
#  error
#endif
