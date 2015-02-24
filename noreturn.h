#ifndef x_noreturn
#  include "has/cxx/attributes.h"
#  if x_has_cxx_attributes
#    define x_noreturn [[noreturn]]
#  else
#    include "has/c/noreturn.h"
#    if x_has_c_noreturn
#      define x_noreturn _Noreturn
#    else
#      include "has/attribute/noreturn.h"
#      if x_has_attribute_noreturn
#        define x_noreturn __attribute__((__noreturn__))
#      else
#        error todo
#      endif
#    endif
#  endif
#endif
