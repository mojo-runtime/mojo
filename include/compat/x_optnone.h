#ifndef x_optnone

#include "has_attribute_optnone.h"

#if has_attribute_optnone
#  define x_optnone __attribute__((__optnone__))
#else
#  include "has_attribute_optimize.h"
#  if has_attribute_optimize
#    define x_optnone __attribute__((__optimize__(0)))
#  else
#    error
#  endif
#endif

#endif
