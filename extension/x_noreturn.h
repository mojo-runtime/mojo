#ifndef x_noreturn
#  include "has/cxx/attributes.h"
#  if has_cxx_attributes
#    define x_noreturn [[noreturn]]
#  endif
#endif

#ifndef x_noreturn
#  include "has/c/noreturn.h"
#  if has_c_noreturn
#    define x_noreturn _Noreturn
#  endif
#endif

#ifndef x_noreturn
#  include "has/attribute/noreturn.h"
#  if has_attribute_noreturn
#    define x_noreturn __attribute__((__noreturn__))
#  endif
#endif

#ifndef x_noreturn
#  error
#endif
